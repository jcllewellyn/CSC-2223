#include <stdio.h>

// Functional Prototypes
double computeAverage(double *values, int size);
char getLetterGrade(double numericGrade);

int main(){
    double grades[] = {99, 99.1, 99.9, 100.1, 105};
    int count = sizeof(grades) / sizeof(double);
    char student[] = "Josh";
    
    // Pointer to the start of the array
    double *pGrades = grades;

    printf("Average: %.2lf \n", computeAverage(pGrades, count));

    printf("Letter Grade: %c \n", getLetterGrade(computeAverage(pGrades, count)));

    printf("Student: %s \n", student);
    printf("Grades: \n");

    for (double *p = grades; p < grades + count; p++) {
	printf("- %.2lf at %p\n", *p, p);
    }

    return 0;
}

double computeAverage(double *values, int size){
    double sum = 0.0;
    double *end = values + size;

    for (double *p = values; p < end; p++) {
	sum += *p; // the value at memloc
    }

    return sum / size;
}
char getLetterGrade(double numericGrade){
    if (numericGrade < 60) return 'F';
    else if (numericGrade < 70) return 'D';
    else if (numericGrade < 80) return 'C';
    else if (numericGrade < 90) return 'B';
    else return 'A';
}
