#include "main.h"


/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Contains utility functions for printing signed numbers
  * and converting unsigned numbers to different numerical bases.
  */



int print_number(long n)
{
	int count = 0;
	char c;

	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	if (n / 10)
		count += print_number(n / 10);

	c = (n % 10) + '0';
	count += write(1, &c, 1);

	return (count);
}

int print_unsigned_base(unsigned long n, int base, int upper)
{
	char *digits;
	int count = 0;
	char c;

	digits = upper ?
		"0123456789ABCDEF" : "0123456789abcdef";

	if (n / base)
		count += print_unsigned_base(n / base, base, upper);

	c = digits[n % base];
	count += write(1, &c, 1);

	return (count);
}

