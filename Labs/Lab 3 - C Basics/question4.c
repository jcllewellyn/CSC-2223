#include <stdio.h>


int main() {
    
    // Initialization
    float galOfGas = 0;
    float milesTravelled = 0;
    const float galToLiter = 3.785;
    const float miToKi = 1.609;

    // Get data from user
    printf("Enter number of miles travelled: ");
    scanf("%f", &milesTravelled);
    printf("Enter number of gallons of gas used: ");
    scanf("%f", &galOfGas);

    // Calculate mpg and liters-per-100km
    float mpg = milesTravelled / galOfGas;
    float lp100km = (1 / mpg) * (galToLiter / miToKi) * 100; // Shouldn't 100 be in the denominator ? 
    							     // this was the only way to get your answer
    // Display calculations
    printf("Miles-per-gallon: %.2f \n", mpg);
    printf("Liters-per-100-km: %.1f \n", lp100km);

    return 0;
}
