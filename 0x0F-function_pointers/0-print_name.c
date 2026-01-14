#include "function_pointers.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: a function that prints a name.
  */

void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}

