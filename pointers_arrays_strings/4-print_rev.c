#include "main.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Traverses the string, then prints backwards.
  */

void print_rev(char *s)
{
    int i = 0;

    while (s[i] != '\0')
        i++;

    while (i > 0)
    {
        i--;
        _putchar(s[i]);
    }
    _putchar('\n');
}

