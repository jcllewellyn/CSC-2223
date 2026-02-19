#include <stdio.h>
#include <string.h>

// Unions
// all the members share memory locations
// thus you cannot access more than one member at the same time

union Student {
    double gpa;
    char name[10];
};

typedef union {
    double gpa;
    char name[10];
} Teacher;

int main() {
    union Student student;
    
    student.gpa = 3.8;
    strcpy(student.name, "Tony");

    printf("gpa: %lf \n", student.gpa);
    printf("name: %s \n", student.name);
    printf("size: %lu \n", sizeof(union Student));

    return 0;
}
