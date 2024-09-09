#include <stdio.h>

double add(double x, double y);

int main(void)
{
    printf("%f\n", add(10.5, 5.9));
    return 0;
}

double add(double x, double y)
{
    double result = x + y;
    return result;
}