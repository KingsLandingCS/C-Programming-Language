#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "This is the way.";
    int length = strlen(s1);
    int numIs = 0;

    for (int i = 0; i < length; i++)
    {
        if (s1[i] == 'i')
        {
            numIs++;
        }
    }

    printf("length: %d\n", length);
    printf("Number of i's: %d\n", numIs);

    return 0;
}