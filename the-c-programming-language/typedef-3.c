#include <stdio.h>
#include <string.h>

typedef struct
{
    char firstName[50];
    char lastName[50];
    int age;
} Student;

int main(void)
{
    Student s1;
    s1.age = 20;
    strcpy(s1.firstName, "Devon");
    strcpy(s1.lastName, "Smith");

    printf("%s %s\n", s1.firstName,
           s1.lastName);

    printf("Age: %d\n", s1.age);

    return 0;
}