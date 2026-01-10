#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter a negative integer to quit at any time. \n");

    while(1) {
	int input;
		
	// Grab data from user
	printf("Enter any positive integer: ");
	scanf("%d", &input);
	
	if (input < 0) { // Quit
	    printf("goodbye 8*_-_*8 \n");
	    break;
	} else { // Calculate unsigned binary
	    // Calculate max
	    short max = 0;
	    int temp = input;
	    do {
		max++;
		temp /= 2;
	    } while (temp > 0);
	    
	    // Form binary string
	    char binary[32] = {};	
	    for(int i = 1; i <= max; i++) {
		// Use division method
		if (input % 2 == 1) binary[max-i] = '1';
		else binary[max-i] = '0';
		input /= 2;	
	    }
	    // Show binary
	    printf("\n Binary: %s \n", binary);
	}

    }    
    return 0;
}



























