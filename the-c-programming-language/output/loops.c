#include <stdio.h>

int main(void)
{
    int i = 0;
    int number = 0;
    int total = 0;
    while (i < 5)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &number);
        total = total + number;
        i++;
    }
    printf("total: %d\n", total);
    printf("average: %d\n", total / 5);
    return 0;
}