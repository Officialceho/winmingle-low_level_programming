#include "main.h"
#include <stdlib.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: allocate a buffer on the heap and fill it with a specific char.
  */


char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
        return NULL;

    arr = malloc(size * sizeof(char));
    if (!arr)
        return NULL;

    for (i = 0; i < size; i++)
        arr[i] = c;

    return arr;
}

