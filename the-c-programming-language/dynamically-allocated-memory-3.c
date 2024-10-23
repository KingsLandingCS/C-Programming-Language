#include <stdio.h>
#include <stdlib.h>

// variable     address     value
//   a            12          5
//   b            13          6
//   c            14          8
//   d            15          10
//   e[0]         16          0
//   e[1]         17          1
//    ..
//   e[9]         25          5
//   f            26          9

int main(void)
{
    int *numbers;
    int size = 2;
    numbers = malloc(sizeof(int) * size);

    int input = 0;
    int i = 0;

    do
    {
        if (i == size)
        {
            size += 2;
            numbers = realloc(numbers, sizeof(int) * size);
            printf("Realloc for %d ints\n", size);
        }
        printf("Enter (-1 to quit):");
        scanf("%d", &input);
        if (input != -1)
        {
            numbers[i] = input;
            i++;
        }

    } while (input != -1);

    int numElements = i;
    int total = 0;
    for (int j = 0; j < numElements; j++)
    {
        total += numbers[j];
        printf("average: %d\n", total / numElements);
    }

    free(numbers);

    return 0;
}

// Note: Stack grow downward and heap grow upward
// Note: If we declare a variable without assigning it a value, it will have a garbage value in it