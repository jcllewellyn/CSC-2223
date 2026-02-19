#include <stdio.h>
#include <stdlib.h> // use for mallo/calloc/realloc


int main() {
    int numItems;

    // prompt the user for info
    printf("How many items do you want in the array?: ");
    scanf("%d", &numItems);

    // an array of integers
    int *values1 =  malloc(sizeof(int) * numItems);

    // calloc is similiar but the args are different
    // callc handles the multiplcation for you, ... ?
    // note that calloc clears the allocated memory for you
    int *values2 = calloc(sizeof(int), numItems);

    // print values 
    for (int i = 0; i < numItems; i++) {
	printf("Item %d: %d ", i+1, values1[i]);
    }
    
    printf("\n");

    // add some values to 'values'
    for (int i = 0; i < numItems; i++) {
	int val;
	printf("Give me a value for the %dth item: ", i+1);
	scanf("%d", &val);
	values1[i] = val * 2;
    }

    printf("\n");
    
    // print values
    for (int i = 0; i < numItems; i++) {
	printf("Item %d: %d ", i+1, values1[i]);
    }
    
    printf("\n");
    return 0;
}
