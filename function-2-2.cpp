#include <stdio.h>
#include <cmath>
int integer = 0;
int bin_to_int(int binary_digits[5], int number_of_digits)
{
    int runningpower = number_of_digits - 1;
    for (int i = 0; i < number_of_digits; i++)
    {
        integer = integer + (binary_digits[i] * (pow(2, runningpower)));
        runningpower = runningpower - 1;
    }
    return (integer);
}
