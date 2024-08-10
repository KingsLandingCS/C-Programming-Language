#include <stdio.h>

int main(void)
{
    int myarray1[] = {5, 9, 10, 11, 4, 1, 8, 6, 7};
    int myarray2[] = {2, 5, 6, 3, 7, 10, 0};

    int min1 = find_min(myarray1, 9);
    int min2 = find_min(myarray2, 7);
    printf("min1: %d\n", min1);
    printf("min2: %d\n", min2);
    return 0;
}

int find_min(int array[], int length)
{
    int min;
    min = array[0];
    for (int i = 0; i < length; i++)
    {
        printf("Checking myarray[%d] = %d\n", i, array[i]);
        if (array[i] < min)
        {
            min = array[i];
            printf("New min found: %d\n", min);
        }
    }
    return min;
}