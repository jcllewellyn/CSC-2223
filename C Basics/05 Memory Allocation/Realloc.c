#include <stdio.h>
#include <stdlib.h>

void append(int *array, int *arrayLength, int newValue);

int main() {

    int length = 1;
    int *array = (int*) malloc(sizeof(int) * length);

    array[0] = 42;

    append(array, &length, 4);
    append(array, &length, 10);
    append(array, &length, 20);

    for (int i = 0; i< length; i++) {
	printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}

void append(int *array, int *arrayLength, int newValue) {
    // update the length of the array
    *arrayLength = *arrayLength + 1;

    // allocate space for one more item
    int *array2 = realloc(array, *arrayLength);

    // reset identifiers
    array = array2;

    // append
    array[*arrayLength -1] = newValue;
}
