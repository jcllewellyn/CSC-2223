#include <stdio.h>


int main() {
    /* Pointers
     - a pointer is a reference to a memory location
     - use * when declaring them
     - must use data types w/ pointers
     - use & to get the memory address of some variable
    */ 
    
    // Example:
    int num = 10;
    int *numPtr = &num; // "address of num"

    printf("Variable num: %d \n", num);
    printf("Variable numPtr: %p \n", numPtr);
    
    // The * is called the "indirection operator", you can dereference the pointer
    // Instead of getting memloc get the value at the memloc
    printf("Variable num: %d \n", *numPtr);
    
    return 0;
}
