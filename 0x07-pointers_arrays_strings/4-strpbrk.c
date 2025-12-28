#include "main.h"

/**
   * Author: Okoye Chijioke Henry
   * Program: WinMingle Community C Training.
   * Description: Find first occurrence in s of any bytes in accept.
   */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
