#include <stdio.h>

//Functional Prototyping
double computeAverage(double values[], int num_items);

int main() {

    /*
     Arrays
     - static in size
     - have homogenous types
     - elements are stored contiguously in memory 
    */
    double grades[10] = {92.1, 5.0, 110.0, 66.9, 75.4};
    
    printf("First Grade:%lf\n", grades[0]);

    printf("grades memory location: %p \n", grades);

    double average = computeAverage(grades, (sizeof(grades)/sizeof(double)));
    
    printf("Your Average is %.3lf \n", average);

    char letter = 's';
    
    if (average < 60) letter = 'F';
    else if (average < 70) letter = 'D';
    else if (average < 80) letter = 'C';
    else if (average < 90) letter = 'B';
    else letter = 'A';
	
    printf("Your Letter grade is %c \n", letter);

    return 0;
}

double computeAverage(double values[], int num_items) {
    double sum = 0.0;
   
    for (int i = 0; i < num_items; i++) {
	sum += values[i];
    }
    
    return sum / num_items;

}
