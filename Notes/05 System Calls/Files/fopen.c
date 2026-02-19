#include <stdio.h>

int main() {
    
    FILE *filePtr = fopen("hello.txt", "r");
    
    if (filePtr == NULL) {
	perror("");
	return 1;
    }

    // whatever you want to do with the file

    fclose(filePtr);
    return 0;

}
