#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[] = "This Is tHe Way.";
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        printf("%c ", s[i]);
        if (isupper(s[i]))
        {
            printf("upper\n");
        }
        else if (islower(s[i]))
        {
            printf("lower\n");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}