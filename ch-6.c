#include <stdio.h>
#include <math.h>

int main()
{
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {

        printf("You are now signed up!\n");
    }
    else if(age <= 0){

        printf("Invalid value\n");

    }
    
    else
    {

        printf("You're too young!\n");
    }

    return 0;
}