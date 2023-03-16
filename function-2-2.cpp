#include <stdio.h>
int integer = 0;
int bin_to_int(int binary_digits[], int number_of_digits)
{
    int runningpower = number_of_digits;
    for (int i = 0; i < number_of_digits; i++)
    {
        integer = integer + (binary_digits[i] * (2 ^ runningpower));
        runningpower = runningpower - 1;
    }
    return (runningpower);
}
