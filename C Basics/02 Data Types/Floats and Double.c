#include <stdio.h>

int main() {

	/* 
	  Floats
	 - Uses the IEEE 754 standards for storing the values as binary
	 - 32 bit, or single precision values.
	 */

	float x = 12.123;
	printf("x: %.3f \n", x);
	
	/*
	  Doubles
	 - 64 bit, or double precision values.
	 */

	double y = 12.123;
	printf("y: %.3lf \n", y);
	
	return 0;
}
