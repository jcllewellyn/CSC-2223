#include <stdio.h>

// Structs
// Memory is allocated for each individual "member"

struct Person{
    int age; // location of first member is location of the entire Person
    char name[20];
};

void printPerson(struct Person person);

int main() {
    struct Person Bill = {10, "Bill"};
    struct Person Amanda = {20, "Amanda"};

    printPerson(Bill);
    printPerson(Amanda);

    printf("The size of a person is %d \n", sizeof(Bill));
    return 0;
}

void printPerson(struct Person person) {
    // examples of accessing "members" and their memlocs
    printf("%s is %d years old \n", person.name, person.age);
    printf("%s is located at %p \n", person.name, &person);
    printf("%s's age is located at %p \n", person.name, &person.age);
    printf("%s's name is located at %p \n", person.name, &person.name);
}
