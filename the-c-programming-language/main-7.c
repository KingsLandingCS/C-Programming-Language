#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {

        printf("The Temp is currently in C");
    }
    else if (unit == 'F')
    {
        printf("The temp is currently in F");
    }
    else
    {
        printf("\n %c is not a valid unit of measurement", unit);
    }

    return 0;
}