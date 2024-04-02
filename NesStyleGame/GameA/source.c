#include <stdio.h>

int AddTwoNumbers(int x, int y)
{
    return (x + y);
}

int main(int argc, char *argv[])
{

    int z = AddTwoNumbers(3, 2);

    printf("Answer: %i\n", z);

    // printf("Arguments: %i\n", argc);

    // if (argc > 1)
    // {
    //     printf("- First Argument: %s\n", argv[2]);
    // }

    return 0;
}