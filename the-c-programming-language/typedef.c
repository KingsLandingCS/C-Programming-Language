#include <stdio.h>

typedef int inches;

struct Point
{
    int x;
    int y;
};

int main(void)
{
    struct Point p1;
    p1.x = 5;
    p1.y = 3;
    printf("(%d, %d)\n", p1.x, p1.y);

    struct Point p2;

    p2.x = 10;
    p2.y = 4;

    printf("(%d, %d)\n", p2.x, p2.y);

    struct Point p3 = {1, 2};

    printf("(%d, %d)\n", p3.x, p3.y);

    struct Point p4 =
        {
            .y = 7, .x = 6};

    return 0;
}