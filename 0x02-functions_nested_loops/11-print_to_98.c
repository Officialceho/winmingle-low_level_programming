#include "main.h"

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: A function that prints all natural numbers from n to 98, followed by a new line.
*/

 void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i < 0)
            {
                _putchar('-');
                _putchar((-i / 10) + '0');
                _putchar((-i % 10) + '0');
            }
            else if (i >= 10)
            {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            }
            else
            {
                _putchar(i + '0');
            }

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i >= 10)
            {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            }
            else
            {
                _putchar(i + '0');
            }

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }

    _putchar('\n');
}

