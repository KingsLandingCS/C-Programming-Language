#include <stdio.h>

//
// 5.2 25.44445 -91.25 0

int main(void)
{
    float x = 5.2;
    double y = -9.8;

    printf("x: ");
    scanf("%f", &x);
    printf("x: %f\n", x);

    printf("y: ");
    scanf("%lf", &y);
    printf("y: %f\n", y);
}