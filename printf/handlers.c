#include "main.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Contains handler functions for character, string,
  * percent, integer, and binary conversion specifiers.
  */



int handle_char(va_list ap)
{
	char c = (char)va_arg(ap, int);
	return (write(1, &c, 1));
}

int handle_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	int len = 0;

	if (!s)
		s = "(null)";

	while (s[len])
		len++;

	return (write(1, s, len));
}

int handle_percent(void)
{
	return (write(1, "%", 1));
}

int handle_int(va_list ap)
{
	return (print_number(va_arg(ap, int)));
}

int handle_binary(va_list ap)
{
	return (print_unsigned_base(va_arg(ap, unsigned int), 2, 0));
}

