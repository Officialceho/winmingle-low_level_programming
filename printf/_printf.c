#include "main.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Contains the main _printf function that parses
  * the format string and dispatches handlers for conversion specifiers.
  */


int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list ap;

	if (!format)
		return (-1);

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				count += handle_char(ap);
			else if (format[i] == 's')
				count += handle_string(ap);
			else if (format[i] == '%')
				count += handle_percent();
			else if (format[i] == 'd' || format[i] == 'i')
				count += handle_int(ap);
			else if (format[i] == 'b')
				count += handle_binary(ap);
			else if (format[i] == 'u')
				count += handle_unsigned(ap);
			else if (format[i] == 'o')
				count += handle_octal(ap);
			else if (format[i] == 'x')
				count += handle_hex(ap, 0);
			else if (format[i] == 'X')
				count += handle_hex(ap, 1);
			else if (format[i] == 'p')
				count += handle_pointer(ap);
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
				count += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	va_end(ap);
	return (count);
}

