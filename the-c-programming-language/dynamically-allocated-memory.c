#include <stdio.h>

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
    int a = 5;
    int b = 6;

    func();

    return 0;
}

void func()
{
    int c = 8;
    int d = 10;
    int e[10];
    int f = 9;
    int e[11];
}

// Note: Stack grow downward and heap grow upward