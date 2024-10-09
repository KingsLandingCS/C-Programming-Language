#include <stdio.h>

void addOne(int *array, int length);

//
//            address    value
//   index 0     55        1
//         1     56        2
//         2     57        3
//
//         p      58        55
//
int main(void)
{
    int a[] = {1, 2, 3};
    int *p;
    p = a;

    printf("p: %p\n", p);
    printf("a: %p\n", a);

    printf("p[2] = %d\n", p[2]);
    printf("a[2] = %d\n", a[2]);

    printf("*(p + 1) = %d\n", *(p + 1));
    printf("*(p + 2) = %d\n", *(p + 2));

    printf("*(a + 1) = %d\n", *(a + 1));
    printf("*(a + 2) = %d\n", *(a + 2));

    return 0;
}

void addOne(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] += 1;
    }
}