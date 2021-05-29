#include <stdio.h>
#include <string.h>

#define MAXNAME 30 // "#define" directive used to defin constants or macros
#define MAXJOB 15

struct People {
    char name[MAXNAME];
    char job[MAXJOB];
    int age;
};

void printPerson(
        struct People person,
        char name[MAXNAME],
        char job[MAXJOB],
        int age);

int main(void)
{
    struct People person;
    struct People person2;

    printPerson(person, "Ali abdaal", "Doctor 🩺", 26);
}

// Structure as function arguments
void printPerson(
        struct People person,
        char name[MAXNAME],
        char job[MAXJOB],
        int age)
{

    strcpy(person.name, name);
    strcpy(person.job, job);
    person.age = age;

    printf("Person's Name: %s\n", person.name);
    printf("Person's Job: %s\n", person.job);
    printf("Person's age: %d\n", person.age);
}
