#include <stdio.h>
extern int bin_to_int(int binary_digits[5], int number_of_digits);
int main()
{
    int binary_digits[5] = {1, 1, 1, 1, 1};
    int number_of_digits = 5;
    int number = bin_to_int(binary_digits, number_of_digits);
    printf("%d", number);
    return 0;
}
