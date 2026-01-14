#include "function_pointers.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Searches for an integer; returns index of first element where cmp != 0, otherwise -1. If size <= 0 return -1.
  */


int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || size <= 0 || cmp == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }

    return (-1);
}

