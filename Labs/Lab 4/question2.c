#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#define HASH_SIZE 33 // 32 + null terminator
#define BUFFER_SIZE 4096 // we are only copying 4096 characters i cant help you if theres more lol

void get_md5(char *filename, char *output);

int main(int argc, char *argv[]){

    char output1[HASH_SIZE];
    char output2[HASH_SIZE];
    char buffer[BUFFER_SIZE];

    // Usage checking
    if (argc != 3) {
	printf("Usage: ./question2 <source_file> <destination_file>\n");
    }

    // open source
    int src_fd = open(argv[1], O_RDONLY);
    
    // check for error
    if (src_fd < 0) {
        perror("Error opening source file");
        return -1;
    }
    
    // create / open destination
    int dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644); 

    // read from source and write to dest
    int read_size = read(src_fd, buffer, BUFFER_SIZE);
    int write_size = write(dest_fd, buffer, read_size);

    // ensure copied correctly
    if (read_size == write_size) {
	printf("Files copied successfully\n");
    } else {
	printf("Error copying files\n");
	exit(1);
    }

    // close files
    close(src_fd);
    close(dest_fd);
    
    get_md5(argv[1], output1); // put md5sum for source in output1
    get_md5(argv[2], output2); // put md5sum for destination in output2

    printf("MD5 (source.txt) = %s\n", output1);
    printf("MD5 (destination.txt) = %s\n", output2);

    return 0;
}    
    
void get_md5(char *filename, char *output) {
    
    // create array that pipe expects
    int fd[2];
    
    // create array for execvp
    char *cmd[] = {"md5sum", filename, NULL};

    // create fd for read and write ends of pipe
    int pip = pipe(fd);

    // check for error
    if (pip == -1) {
	perror("pipe failed");
	exit(1);
    }

    // fork lol
    pid_t pid = fork();

    // check for error
    if (pid < 0) {
	perror("fork failed");
    	exit(1);
    }

    if (pid == 0) {
	// In Child
    	close(fd[0]); // close read end
        dup2(fd[1], STDOUT_FILENO);

	execvp(cmd[0], cmd);

    	close(fd[1]); // close write end
    } else {
	// In Parent
    	close(fd[1]); // close write end
    	char buffer[128]; // receives whole md5sum commmmand output
	
	read(fd[0], buffer, sizeof(buffer));
	strncpy(output, buffer, 32);
	output[32] = "\0"; // place null terminator manually, md5sum is only 32 characters

	close(fd[0]); // close read end
	wait(NULL);
    }

}
