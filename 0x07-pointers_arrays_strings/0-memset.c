#include "main.h"

/**
   * Author: Okoye Chijioke Henry
   * Program: WinMingle Community C Training.
   * Description: A function that fills memory with a constant byte.
   */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
