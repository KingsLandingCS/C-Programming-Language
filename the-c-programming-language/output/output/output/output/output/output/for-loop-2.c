#include <stdio.h>

int main(void)
{
    double initial = 0, step = 0, stop = 0;

    do
    {
        printf("Initial (m): ");
        scanf("%lf", &initial);
        if (initial < 0)
        {
            printf("Initial Must be greater than or equal to 0!\n");
        }
    } while (initial < 0);

    do
    {
        printf("Step (m): ");

        scanf("%lf", &step);
        if (step <= 0)
        {
            printf("Step Must be greater than 0!\n");
        }
    } while (initial <= 0);

    do
    {
        printf("Stop (m): ");

        scanf("%lf", &stop);
        if (stop < 0)
        {
            printf("Stop Must be greater than or equal to 0!\n");
        }
    } while (stop < 0);

    printf("\n");
    printf("Meters    Feet");
    printf("************************\n");
    for (double conv = initial; conv <= stop; conv += step)
    {
        printf("%f %f\n", conv, conv * 3.28084); // 1 m = 3.28084 ft
    }

    return 0;
}