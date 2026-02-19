#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {

    // create array for execvp
    char *args[] = {argv[1], NULL};

    // Check for correct number of arguments
    if (argc != 2) {
	printf("Usage: ./question1 <executable>\n"); 
	return 1;
    }

    pid_t pid = fork();

    // check for error
    if (pid < 0) {
	perror("fork failed");
    }

    if (pid == 0) {
	// In Child
	printf("Child %d:\n", getpid());
	execvp(args[0], args);
        
    	perror("executable does not exist (probably)");
    } else {
	// In Parent
   	wait(NULL);
	return 0;
    }

}
