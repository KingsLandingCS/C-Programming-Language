#include <stdio.h>

double mult(double x, double y);
double power(double x, int n);

int main(void)
{
    printf("%f\n", power(2, 3));
    printf("%f\n", power(2, 1));
    printf("%f\n", power(5.8, 9));

    return 0;
}

double mult(double x, double y)
{
    return x * y;
}

double power(double x, int n)
{
    double result = x;
    for (int i = 1; i < n; i++)
    {
        result = mult(result, x);
    }
    return result;
}