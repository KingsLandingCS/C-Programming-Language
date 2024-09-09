#include <stdio.h>

int findMax(int a, int b);

int main(void)
{
    int max = findMax(10, 5);
    printf("max: %d\n", max);
    return 0;
}

int findMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}