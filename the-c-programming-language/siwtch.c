#include <stdio.h>

int main(void)
{
    int number = 3;

    switch (number)
    {
    case 0:
        printf("Case 0!\n");

    case 1:
        printf("Case 1!\n");
        break;

    case 2:
        printf("Case 2!\n");

    default:
        printf("Default!\n");
    }

    return 0;
}