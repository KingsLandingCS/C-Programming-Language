#include <stdio.h>

void addOne(int *a, int *b, int *c);

int main(void)
{
    int x1 = 1, x2 = 2, x3 = 3;

    addOne(&x1, &x2, &x3);
    printf("x1: %d\n", x1);
    printf("x2: %d\n", x2);
    printf("x3: %d\n", x3);

    return 0;
}

//
// Variables      address      Value
// b (int)         72          5
// a (pointer)     73          72

void addOne(int *a, int *b, int *c)
{
    *a = *a + 1;
    *b = *b + 1;
    *c = *c + 1;
}