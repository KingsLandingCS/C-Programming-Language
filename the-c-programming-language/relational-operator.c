#include <stdio.h>

int main(void)
{
    int height = 0;
    printf("height: ");
    scanf("%d", &height);

    int weight = 0;
    printf("weight: ");
    scanf("%d", &weight);

    if (height > 150 && weight > 50)
    {
        printf("Good to ride!\n");
    }
    else
    {
        printf("Not good to ride!\n");
    }
    return 0;
}