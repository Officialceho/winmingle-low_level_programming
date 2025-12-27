#include "main.h"

/**
  4 * Author: Okoye Chijioke Henry
  5 * Program: WinMingle Community C Training.
  6 * Description: Exchanges the values of two integers using pointers.
  7 */


void swap_int(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}
