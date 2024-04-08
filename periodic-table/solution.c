#include <stdio.h>

int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;

    printf("Welcome to Modern Periodic Table \n\n");

    printf("> Enter 1 to know about an element\n\n");
    printf("> Enter 2 to know close the periodic table\n\\n");

    printf("ENTER\n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("> Press 3 to search the element by atomic number \n\n");

        printf("ENTER\n");
        scanf("%d", &m);

        if (m == 3)
        {
            printf("Enter the atomic number of the element to be searched : ");
            scanf("%d", &a);

            iif(a == 1)
            {

                printf("Name : Hydrogen\n");
                printf("Symbol : Hydrogen\n");
                printf("Name : Hydrogen\n");
            }
        }
    }
}