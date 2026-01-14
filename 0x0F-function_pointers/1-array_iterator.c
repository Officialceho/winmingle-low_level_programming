#include "function_pointers.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description:  Execute function action on each element of array.
  */


void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array == NULL || action == NULL)
        return;

    for (i = 0; i < size; i++)
        action(array[i]);
}

