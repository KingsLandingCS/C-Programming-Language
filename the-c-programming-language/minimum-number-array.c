#include <stdio.h>

int main(void)
{
    int myarray[] = {5, 9, 10, 11, 4, 1, 8, 6, 7};
    int min;
    min = myarray[0];
    for (int i = 0; i < 9; i++)
    {
        printf("Checking myarray[%d] = %d\n", i, myarray[i]);
        if (myarray[i] < min)
        {
            min = myarray[i];
            printf("New min found: %d\n", min);
        }
    }
    printf("Minimum: %d\n", min);
    return 0;
}