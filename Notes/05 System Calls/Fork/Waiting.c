#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void) {
    
    /* 
     * creating a variable to hold info about the state of the child process (bit encoded int)
     * status can hold info about:
     * - did the process exit normally?
     * - what was the exit code?
     * - did the process terminate via a signal? If so which one?
     * - did the process stop? or did it continue?
     */

    int status;
    pid_t pid = fork();

    if (pid < 0) {
	perror("fork() failed");
	exit(EXIT_FAILURE);
    }

    if (pid == 0) {
	// child process
	printf("Child: process id is %d\n", getpid());
	sleep(3);
	exit(3);
    } else {
	// parent process
	printf("Parent: waiting for child %d\n", pid);

	/* 
	 * waitpid() - Three parameters:
	 * 1: represents the process we want to wait for 
	 *     if > 0 then we are waiting on a specific process
	 *     if -1, then we are waiting on any child process
	 *     if 0,  then we are waiting on any child process in the same process group
	 * 2: the mem address of the status variable
	 * 3: options (0 is most common)
	 *     other options include:
	 *         WNOHANG - doesn't block parent. causes waitpid to return immediately.
	 *         WUNTRACED - returns if the child is stopped
	 *         WCONTINUED - returns if a stopped child is resumed
	 * Returns:
	 *     if > 0 then we have the process id of a child that changed
	 *     if 0,  then youre using WNOHANG, so it returns immediately
	 *     if -1, an error occured
	 */

	// wait(&status) is the same as waitpid(-1, &status, 0)
	short waited = waitpid(pid, &status, 0);
        
	if (waited == -1) {
	    perror("waitpid() failed");
	    exit(EXIT_FAILURE);
	}

	// some macros for status information
	if (WIFEXITED(status)) {
	    // child exited normally
	    printf("Parent: child exited normally with status %d\n", WEXITSTATUS(status));
	}

    }
}
