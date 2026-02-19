#include <unistd.h>
#include <stdio.h>

int main() {

    // array of args
    char *args[] = {
	    "ls",
	    "-l",
	    NULL // Must have at least 1 NULL
    };

    execvp(args[0], args);
    printf("This doesn't happen\n");
}
