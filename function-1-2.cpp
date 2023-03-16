#include <stdio.h>

void print_matrix(int array[10][10])
{
    for (int n = 0; n < 10; n++)
    {
        for (int m = 0; m < 10; m++)
        {
            printf("%d ", array[n][m]);
        }
        printf("\n");
    }

    return;
}