#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {

    // typedef for an integer
    pid_t pid = fork();

    // if pid < 0; then we have an error
    if(pid < 0) {
	perror("Fork function failed");
	return 1;
    }

    if (pid == 0) {
        // in child process
	printf("From child: pid is %d\n", pid);
        printf("From child: getpid is %d\n", getpid());
        printf("From child: getppid is %d\n", getppid());
	return 0;
    } else {
	// in parent process
	wait(NULL);
	printf("From parent: pid is %d\n", pid);
	printf("From parent: getpid is %d\n", getpid());
        printf("From parent: getppid is %d\n", getppid());
	return 0;
    }

}
