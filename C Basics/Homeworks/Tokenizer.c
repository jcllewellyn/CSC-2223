#include <stdio.h>
#include <string.h>

int main() {

    const short BUFFER = 256;
    short numTokens = 0;
    short doContinue = 1;
    char tokens[BUFFER];
    char *token;
    while (doContinue) { 
	// get user input
	printf("$ ");
	fgets(tokens, BUFFER, stdin);
        
	// repeat user input
	printf("Line read: %s \n", tokens);

	// get first token
	token = strtok(tokens," ");
	if(strcmp(token,"exit\n") == 0 && token != NULL) { // if the first token is exit
	    break;
	}
	printf("Token(s): \n");
	while(token != NULL) { // while there is still tokens
		// Print current token and go to next token
		printf("%s \n", token);
		token = strtok(0," ");
		numTokens++;
        }
	
	// print final message and reset numTokens
	printf("%d token(s) read\n", numTokens);
	numTokens = 0;
    }

    return 0;
}
