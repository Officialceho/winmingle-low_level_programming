#include "main.h"

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training.
* Description:  a function that returns the natural square root of a number.
*/


int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (find_root(n, i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}

