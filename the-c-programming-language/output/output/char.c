#include <stdio.h>

int main(void)
{
    char c = 'd';
    int speed = 10;
    double x = 5.5;
    float y = -2.5;

    printf("c: ");
    scanf("%c", &c);
    printf("c: %c\n", c);
    printf("c: %d\n", c);

    return 0;
}