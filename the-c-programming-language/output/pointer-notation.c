#include <stdio.h>

void addOne(int *array, int length);

int main(void)
{
    int a[] = {1, 2, 3};
    addOne(a, 3); // ===> a[] = a, means that array decays to a pointer
    for (int i = 0; i < 3; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    return 0;
}

void addOne(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] += 1;
    }
}