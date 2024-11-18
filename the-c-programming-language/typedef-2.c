#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

int main(void)
{
    Point p1 = {.x = 6,
                .y = 9};

    printf("(%d, %d)\n", p1.x, p1.y);

    return 0;
}