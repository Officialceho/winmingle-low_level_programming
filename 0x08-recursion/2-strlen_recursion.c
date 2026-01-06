#include "main.h"

/** 
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: a function that returns the length of a string.
*/


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

