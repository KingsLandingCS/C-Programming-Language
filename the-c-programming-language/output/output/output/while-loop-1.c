#include <stdio.h>

int main(void)
{
    int number = 0;
    int max = -1;

    while (number != -1)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > max)
        {
            max = number;
        }
        printf("max: %d\n", max);
    }

    printf("max: %d\n", max);
    return 0;
}