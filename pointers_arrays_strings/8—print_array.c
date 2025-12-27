#include "main.h"
#include <stdio.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Prints numbers separated by commas.
  */

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");
}
