#include <stdio.h>
#include <math.h>

void printIntro();
float promptUser(char information[]);
float evalFunc(float x);
float evalRiemann(int lower, int upper, float delta);

int main() { 
    // Function Call
    printIntro();

    return 0;
}

void printIntro() {
    // Initialization
    int low, upper;
    float delta;

    // Intro
    printf("This program will calculate the integral of the function 3x^3 - 2x^2\nBetween user defined limites: a and b\n");
    low = promptUser("a");
    upper  = promptUser("b");
    printf("The accuract of this calculation depends on the value of delta that you use. \n");
    delta = promptUser("delta");

    // Eval and print integral
    printf("The integral over the provided limits is %.4f.\n", evalRiemann(low,upper,delta));
}

float promptUser(char information[]){
    float temp;

    // Prompt user
    printf("What is the value of \"%s\": ", information);
    scanf("%f", &temp);
    return temp;
}

float evalFunc(float x) {
    // self explanatory
    
    float sum = 3*x*x*x - 2*x*x;
    return sum;
}

float evalRiemann(int low, int upper, float delta){
    // Declare Variables
    float sum = 0;
    float xi = 0;
    // Calculate n;
    float n = (upper-low)/delta;
   
    // "Summation"
    for(int i = 1; i <= n;i++) {
	xi = low + (i-1)*delta;
	sum += (evalFunc(xi) * delta);
    }

    return sum;
}


