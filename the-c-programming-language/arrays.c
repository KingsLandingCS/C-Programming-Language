#include <stdio.h>

//
// index: 0  1  2  3  4
//
// grade: 92 85 72 73 95
//

int main(void)
{
    int grade[] = {92, 85, 72, 73, 95};

    for (int i = 0; i < 5; i++)
    {
        printf("grade[%d]=%d\n", i, grade[i]);
    }

    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += grade[i];
    }
    printf("average: %d\n", total / 5);
    return 0;
}