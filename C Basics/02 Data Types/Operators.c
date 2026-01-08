#include <stdio.h>
#include <stdbool.h>
int main() {
/*
  Arithmetic Operators
  + for addition
  - for subtraction
  * for multiplcation
  / for division
  % for mod (or remainder operator)
*/

/*
 Logical Operators
 && for logical AND
 || for logical OR
 !  for logical NOT
*/

// 0 = false, non-zero = true (include stdbool.h for true and false keywords)
    if (1) {
 	printf("It was True!\n");
    }	

    if (true && false) {
	printf("both were true!\n");
    } else {
    	printf("at least one was false\n");
    }

    if (true || false ) {
	printf("at least one was true\n");
    } else if (false || false) {
	printf("this does not make sense...\n");
    } else {
    	printf("f is for format\n");
    }

    if(!false) printf("do this\n");

/*
 Bitwise Operators
 & for bitwise and
 | for bitwise or
 ^ for bitwise xor
 ~ for bitwise not
 >> bitwise right shift (Ex: x >> 2; shift bits right 2 spots)
 << bitwise left shift
*/

    unsigned int u = 10; // in bin: 00000000 00000000 00000000 00001010
    unsigned int v = 15; // in bin: 00000000 00000000 00000000 00001111

    unsigned int result1 = u & v;

    /* (Compare each bit w/ eachother)
       00000000 00000000 00000000 00001010
     & 00000000 00000000 00000000 00001111
     -------------------------------------
       00000000 00000000 00000000 00001010 --> in decimal: 10
    */

    printf("result1: %u \n", result1);

    unsigned int result2 = u | v;
    
    /* (Compare each bit w/ eachother)
       00000000 00000000 00000000 00001010
     | 00000000 00000000 00000000 00001111
     -------------------------------------
       00000000 00000000 00000000 00001111 --> in decimal: 15
    */

    printf("result2: %u \n", result2);


    return 0;
}
