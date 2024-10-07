#include <stdio.h>

void addOne(int *a);

int main(void)
{
    int b = 5;
    printf("&b: %p\n", &b);
    addOne(&b);
    printf("b: %d\n", b);
    return 0;
}

//
// Variables      address      Value
// b (int)         72          5                
// a (pointer)     73          72

void addOne(int *a)
{
    printf("a: %p\n", a);
    *a = *a + 1;
}