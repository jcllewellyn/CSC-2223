#include <stdio.h>

int main(){
    const short SINM = 60;
    const short MINH = 60;
    const short HIND = 24;

    printf("Enter a negative number to exit at any time.\n");

    while(1){
	int totalSeconds;

	// Pull from user input
	printf("Enter total amount of seconds to convert: ");
	scanf("%d", &totalSeconds);
	
	// Enter negative integer to stop
	if (totalSeconds < 0 ){
	    printf("\n goodbye *_-_* \n");
	    break;
	}
	else {
    	    // Calculate s,m,h,d	    
	    int seconds = totalSeconds % SINM;
	    int minutes = (totalSeconds / SINM) % MINH;
	    int hours = ((totalSeconds / SINM) / MINH) % HIND;
	    int days = (((totalSeconds / SINM) / MINH) / HIND);
	    
	    // Show calculations
	    printf("\n %dd %dh %dm %ds \n", days, hours, minutes, seconds);
	}
    }

    return 0;
}
