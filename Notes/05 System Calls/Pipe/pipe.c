#include <stdio.h>
#include <unistd.h>

int main() {
 
    /*
     * create an array for the file descriptors for both ends of the pipe.
     * fd[0] will represent the read end of the pipe
     * fd[1] will represent the write end of the pipe
     */
    int fd[2];

    if (pipe(fd) == -1) {
	perror("pipe error");
	return 1;
    }

    int pid = fork();

    if (pid == -1) {
	perror("fork error");
	return 2;
    }

    if (pid == 0) {
	// child process - write to pipeline
	close(fd[0]);

	// prompt user for data
	int someNum;
	printf("Child: Give me an int: ");
	scanf("%d", &someNum);

	// write to the pipe
	write(fd[1], &someNum, sizeof(int));
	
	close(fd[1]);

    } else {
	// parent process - read the pipeline
	close(fd[1]);
	
	// read from the pipe
	int theNum;
	read(fd[0], &theNum, sizeof(int));
	printf("Parent: Recieved %d\n", theNum);
	
	close(fd[0]);
    }

    return 0;

}
