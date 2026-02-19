#include <stdio.h>
#include <unistd.h> // contains fork()

int main(void) {
    // this happens only in the parent
    printf("First\n");

    // A child process is created, virtual mem is duplcated for the child, virtual memory is seperate
    fork(); // called once but returns twice

    // this happens in both the parent and child process
    printf("Second\n");

    fork();

    printf("Third\n"); // 4 processes

    return 0;
}
