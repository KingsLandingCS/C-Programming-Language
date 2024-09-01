#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[20];

    printf("Enter: ");
    scanf("%s", s1);

    int i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] == '0')
        {
            printf("found 0\n");
        }
        i++;
    }
    printf("s1: %s\n", s1);
    return 0;
}