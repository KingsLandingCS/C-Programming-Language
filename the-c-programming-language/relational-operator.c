#include <stdio.h>

int main(void)
{
    int height = 0;
    printf("height: ");
    scanf("%d", &height);

    // int weight = 0;
    // printf("weight: ");
    // scanf("%d", &weight);

    if (!(height > 150))
    {
        printf("Not tall enough!\n");
    }
    else
    {
        printf("Tall enough!\n");
    }

    return 0;
}