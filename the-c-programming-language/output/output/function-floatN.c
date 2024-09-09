#include <stdio.h>

float triple(float n);

int main(void)
{
    float x = 5.0;
    x = triple(x);
    printf("x: %f\n", x);

    return 0;
}

float triple(float n)
{
    n = n * 3;
    return n;
}


// The given C program demonstrates a simple function that multiplies a floating-point number by 3. Let's break it down step by step:

// 1. Header Files
// c
// Copy code
// #include <stdio.h>
// The program includes the standard input-output header file (stdio.h) to use the printf function for output.

// 2. Function Prototype
// c
// Copy code
// float triple(float n);
// This is a function prototype that tells the compiler that a function named triple exists and takes one argument of type float. The function returns a float value.

// 3. Main Function
// c
// Copy code
// int main(void)
// {
//     float x = 5.0;
//     x = triple(x);
//     printf("x: %f\n", x);

//     return 0;
// }
// float x = 5.0;

// A floating-point variable x is declared and initialized with the value 5.0.
// x = triple(x);

// The triple function is called with x (which is 5.0) as the argument. The result returned by the triple function is assigned back to x.
// printf("x: %f\n", x);

// The value of x is printed to the console using the printf function. %f is the format specifier for printing floating-point numbers.
// return 0;

// The main function returns 0, indicating that the program executed successfully.

// 4. Triple Function
// c
// Copy code
// float triple(float n)
// {
//     n = n * 3;
//     return n;
// }
// float triple(float n);

// This function takes one float argument, n.
// n = n * 3;

// The value of n is multiplied by 3, and the result is stored back in n. For example, if n = 5.0, the result will be 15.0.
// return n;

// The function returns the updated value of n, which is now 15.0 in this case.
// 5. How It Works Together
// The main function initializes x to 5.0.
// The triple function is called with x as the argument.
// Inside the triple function, x is multiplied by 3, resulting in 15.0.
// This 15.0 is returned and stored back in x.
// The program then prints the value of x, which is now 15.0.

// 6. Output
// makefile
// Copy code
// x: 15.000000
// The program prints x as 15.000000 because it was tripled by the triple function.
// In summary, the program multiplies the input value by 3 using a separate function and prints the result.