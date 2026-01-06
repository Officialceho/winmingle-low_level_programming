#include "main.h"

/** 
* Author: Okoye Chijioke Henry.
* Program: WinMingle Community C Training
* Description: a function that returns the factorial of a given number.
*/


int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

