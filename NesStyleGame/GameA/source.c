#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Arguments: %i\n", argc);

    if (argc > 1)
    {
        printf("- First Argument: %s\n", argv[1]);
    }

    return 0;
}