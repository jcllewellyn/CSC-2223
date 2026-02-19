#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    // Run receive.c first
    // run ./send <target-pid> to send a signal to target process

    if (argc != 2) {
	printf("Usage: %s <target-pid>\n", argv[0]);
	return 1;
    }
    
    // atoi() casts a char to an int
    int targetPid = atoi(argv[1]);

    printf("Sender: sending SIGUSR1 to pid %d\n", targetPid);
    kill(targetPid, SIGUSR1);

    return 0;
}
