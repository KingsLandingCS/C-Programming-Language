#include <stdio.h>

int main(void)
{
    int height = 0;
    printf("height: ");
    scanf("%d", &height);
    if (height <= 155)
    {
        printf("Not tall enough!\n");
    }
    else
    {
        printf("Tall enough!\n");
    }

    return 0;
}