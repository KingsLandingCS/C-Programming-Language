#include <stdio.h>
#include <stdlib.h>

// variable     address     value
//   a            12          5
//   b            13          6
//   c            14          8
//   d            15          10
//   e[0]         16          0
//   e[1]         17          1
//    ..
//   e[9]         25          5
//   f            26          9

int main(void)
{
    int *a;
    a = malloc(sizeof(int) * 5);
    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}

// Note: Stack grow downward and heap grow upward