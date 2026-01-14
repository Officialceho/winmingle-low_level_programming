#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description:  a program that multiplies two positive numbers.
  */


int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

void errors(void)
{
	printf("Error\n");
	exit(98);
}

int main(int argc, char *argv[])
{
	char *n1, *n2;
	int len1, len2, i, j, carry, d1, d2;
	int *res;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		errors();

	n1 = argv[1];
	n2 = argv[2];
	len1 = _strlen(n1);
	len2 = _strlen(n2);

	res = _calloc(len1 + len2, sizeof(int));
	if (res == NULL)
		return (1);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		d1 = n1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			d2 = n2[j] - '0';
			carry += res[i + j + 1] + (d1 * d2);
			res[i + j + 1] = carry % 10;
			carry /= 10;
		}
		res[i + j + 1] += carry;
	}

	i = 0;
	while (i < len1 + len2 && res[i] == 0)
		i++;

	if (i == len1 + len2)
		_putchar('0');

	for (; i < len1 + len2; i++)
		_putchar(res[i] + '0');

	_putchar('\n');
	free(res);
	return (0);
}

