#include "main.h"

/**
   * Author: Okoye Chijioke Henry
   * Program: WinMingle Community C Training.
   * Description: Return length of prefix substring matching bytes from accept.
   */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0, found;

	for (i = 0; s[i]; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
	}
	return (count);
}
