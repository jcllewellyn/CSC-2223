#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

void handleSignal(int sig) {
    printf("Recieved %d: %s\n", sig, strsignal(sig));
}

int main() {

    printf("Receiver PID: %d\n", getpid());

    // register the handler for SIGUSR1;
    signal(SIGUSR1, handleSignal);

    printf("Reciever: waiting... \n)");

    while(1) {
	pause();
    }

    return 0;
}
