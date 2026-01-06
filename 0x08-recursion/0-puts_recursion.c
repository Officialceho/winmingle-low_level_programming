#include "main.h"

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: a function that prints a string, followed by a new line.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

