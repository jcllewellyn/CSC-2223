#include <stdio.h>

//Functional Prototyping
double computeAverage(double values[], int num_items);
char getLetterGrade(double numericGrade);
int main() {

    /*
     Arrays
     - static in size
     - have homogenous types
     - elements are stored contiguously in memory 
    */
    double grades[] = {92.1, 5.0, 110.0, 66.9, 75.4};
    
    printf("First Grade:%lf\n", grades[0]);

    printf("grades memory location: %p \n", grades);

    int numItems = (sizeof(grades)/sizeof(double));

    printf("There are %d grades \n", numItems);
    
    double average = computeAverage(grades,numItems);
    
    printf("Your grader average is %.2f \n", average);

    char letter = getLetterGrade(average);

    printf("Your Letter grade is %c \n", letter);

    //Strings are character arrays
    char studentName[] = "Edward"; // double quotes
    
    //print individual grades w/ a while loop
    printf("Grades: \n");
    int i = 0;
    while (i < numItems) {
	printf("- %.2f \n", grades[i]);
	i++;
    }

    return 0;
}

double computeAverage(double values[], int num_items) {
    double sum = 0.0;
   
    for (int i = 0; i < num_items; i++) {
	sum += values[i];
    }
    
    return sum / num_items;

}

char getLetterGrade(double numericGrade) {
    char letter;
    if (numericGrade < 60) letter = 'F';
    else if (numericGrade < 70) letter = 'D';
    else if (numericGrade < 80) letter = 'C';
    else if (numericGrade < 90) letter = 'B';
    else letter = 'A';
    return letter;
}

