#include "main.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Contains handler functions for unsigned integers,
  * octal, hexadecimal, and pointer conversion specifiers.
  */


int handle_unsigned(va_list ap)
{
	return (print_unsigned_base(va_arg(ap, unsigned int), 10, 0));
}

int handle_octal(va_list ap)
{
	return (print_unsigned_base(va_arg(ap, unsigned int), 8, 0));
}

int handle_hex(va_list ap, int upper)
{
	return (print_unsigned_base(va_arg(ap, unsigned int), 16, upper));
}

int handle_pointer(va_list ap)
{
	unsigned long addr = (unsigned long)va_arg(ap, void *);
	int count = 0;

	count += write(1, "0x", 2);
	count += print_unsigned_base(addr, 16, 0);

	return (count);
}

