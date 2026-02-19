#include <unistd.h>
#include <stdio.h> // includes perror()
#include <errno.h> // includes errno variable
#include <string.h> // includes strerror() function

int main() {

    char *args1[] = {
	    "ls",
	    "-l" // leave off NULL
    };

    char *args2[] = {
	    "aoisfnsasd", // intentionally not an executable
	    "-dasfas",
	    NULL
    };

    execvp(args1[0], args1);
    perror("Uh Oh!");
    printf("Error %d: %s\n", errno, strerror(errno));
}
