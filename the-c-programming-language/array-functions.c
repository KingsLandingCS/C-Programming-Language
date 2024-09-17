#include <stdio.h>

void addOne(int array[], int length);

int main(void)
{
    int a[] = {2, 4, 9, 1, 3, 5};

    printf("a: %p\n", a);

    addOne(a, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    return 0;
}

void addOne(int array[], int length)
{
    printf("array: %p\n", array);
    for (int i = 0; i < length; i++)
    {
        array[i] += 1;
    }
}