#include <stdio.h>

// variables       address      value
// a (int)           55          5
// b (int)           56          10
// p (pointer)       57          56

int main(void)
{
    int a = 5;
    int b = 10;
    int *p;
    p = &b; // p points to b, meaning p stores the memory address of b
    printf("p: %p\n", p);
    printf("&b: %p\n", &b);
    printf("&a: %p\n", &a);
    p = &a;
    printf("p: %p\n", p);
    *p = *p + 1;
    printf("a: %d\n", a);

    return 0;
}