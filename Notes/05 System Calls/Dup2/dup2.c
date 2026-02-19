#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {

    // looking to have a file
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd < 0) {
	perror("open failed");
        return 1;
    }

    //redirect standard output to output.txt
    dup2(fd, STDOUT_FILENO);

    close(fd);

    printf("Is this in the file or terminal?\n");

    return 0;

}
