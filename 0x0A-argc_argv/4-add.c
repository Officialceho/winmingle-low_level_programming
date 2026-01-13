#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Adds positive numbers only.
  */

int is_number(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

