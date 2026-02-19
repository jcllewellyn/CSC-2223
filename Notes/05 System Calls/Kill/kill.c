#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // contains kill()
#include <signal.h> // contains some useful macros
#include <sys/wait.h> // wait function

int main() {

    int pid = fork();

    if (pid < 0) {
	perror("fork error");
	return 1;
    }

    if (pid == 0) {
	// child process
	printf("Child: pid = %d\n", getpid());

	// a forever loop
	while (1) {
	    printf("Child is running...\n");
	    sleep(2);
	}

    } else {
	// parent process
	printf("Parent: PID = %d, childpid = %d\n", getpid(), pid);

	sleep(8);

	printf("Parent: sending SIGTERM to child\n");

	// the function we use to send signals to other processes, doesnt have to always kill.
	kill(pid, SIGTERM);

	wait(NULL);
	printf("Parent: child has terminated\n");

    }

    return 0;

}
