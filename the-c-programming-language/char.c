#include <stdio.h>

int main(void)
{
    char myData[5];
    myData[0] = 'a';
    myData[1] = 'b';
    myData[2] = 'c';
    myData[3] = 'd';
    myData[4] = '\0';

    printf("myData[2] = %c\n", myData[2]);

    printf("\n%s\n", myData);

    return 0;
}