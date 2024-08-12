#include <stdio.h>

// speed       time     distance
//  |  20  |  |  7  |   |   140  |
int main(void)
{
    int speed = 0;
    int time = 0;
    printf("Speed: ");
    scanf("%d", &speed);
    printf("Time: ");
    scanf("%d", &time);
    int distance = speed * time;
    printf("dist: %d\n", distance);
    return 0;
}