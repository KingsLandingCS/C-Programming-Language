#include <stdio.h>

int main(void)
{
    int i = 0;
    int number = 0;
    int total = 0;
    int totalNumbers = 0;
    printf("How many numbers? ");
    scanf("%d", &totalNumbers);

    while (i < totalNumbers)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &number);
        total = total + number;
        i++;
    }
    printf("total: %d\n", total);
    printf("average: %d\n", total / totalNumbers);
    return 0;
}