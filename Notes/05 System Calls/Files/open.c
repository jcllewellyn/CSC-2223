#include <fcntl.h> // file control contains useful macros
#include <unistd.h> 
#include <stdio.h>

int main() {
  
    /* 
     * fd (file descriptor)
     * Note: The file descriptors 0, 1, and 2 are already taken by stdin, stdout, stderr (respectively).
     * Use O_WRONLY to open to edit
     * Use O_CREAT to create the file if it doesn't exist
     * Use O_TRUNC to erase the contents of the file if it exist already.
     * Use O_APPEND to add to the end of a file that exists.
     * Use | to apply multiple options.
     * The 0644 are the octal permissions. The 0 'says' octal.
     */
    int fd = open("hello.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd < 0) {
	perror("error with open()");
    }

    printf("File Descriptor: %d\n", fd);

    const char MESSAGE[] = "These are the contents of the file.\n";

    write(fd, MESSAGE, sizeof(MESSAGE) - 1); // minus 1 to not include \0 (null character)

    close(fd);
}
