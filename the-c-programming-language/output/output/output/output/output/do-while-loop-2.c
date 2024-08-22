#include <stdio.h>

int main(void)
{
    int number = 0;

    do
    {
        printf("Enter number greater than 0: ");
        +scanf("%d", &number);
    } while (number <= 0);

    return 0;
}