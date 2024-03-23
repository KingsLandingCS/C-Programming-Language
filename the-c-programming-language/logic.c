#include <stdio.h>
#include <stdbool.h>

int main()
{

    float temp = 25;
    bool sunny = false;

    if (temp >= 0 && temp <= 30 && sunny == true)
    {

        printf("\nThe weather is good!");
    }
    else
    {

        printf("\nThe weather is bad!");
    }

    return 0;
}