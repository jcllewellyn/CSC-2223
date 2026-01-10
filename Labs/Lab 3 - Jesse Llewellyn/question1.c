#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // Edge Cases	
    if (argc - 1 < 2) printf("Must provide at least 2 arguments.");
    else if (argc - 1 > 6) printf("Must provide at most 6 arguments.");
    else {
	char message[2*argc - 1] = {};
	// place spaces
	for (int i = 1; i < argc - 1; i++) {
	    message[i*2-1] = ' ';
	}
	// form message
	for (int i = 0; i < argc - 1; i++) {
	    if (i%2 == 0) message[i*2] = argv[i+1][0];	
	    else message[i*2] = argv[i+1][1];
	}

	printf("%s \n", message);
    }

    return 0;
}
