#include <stdio.h>

int main(void)
{
    int grade = 0;
    printf("Grade: ");
    scanf("%d", &grade);

    if (grade >= 90)
    {
        printf("Congrats you got grade A!\n");
    }
    else if (grade >= 80)
    {
        printf("Congrats you got grade B!\n");
    }
    else if (grade >= 70)
    {
        printf("Congrats you got grade C!\n");
    }
    else if (grade >= 60)
    {
        printf(" you got grade D!\n");
    }
    else if (grade >= 50)
    {
        printf("you got grade F!\n");
    }
    else
    {
        printf("Better luck next time!\n ");
    }

    return 0;
}