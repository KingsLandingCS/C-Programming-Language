#include <stdio.h>

void printTwo(float a, float b);

int main(void)
{
    float x = 2.5, y = 4.2;
    printTwo(x, y);

    return 0;
}

void printTwo(float a, float b)
{
    printf("%f\n%f\n", a, b);
}