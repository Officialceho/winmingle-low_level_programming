#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);

/* handlers */
int handle_char(va_list ap);
int handle_string(va_list ap);
int handle_percent(void);
int handle_int(va_list ap);
int handle_binary(va_list ap);
int handle_unsigned(va_list ap);
int handle_octal(va_list ap);
int handle_hex(va_list ap, int upper);
int handle_pointer(va_list ap);

/* utils */
int print_number(long n);
int print_unsigned_base(unsigned long n, int base, int upper);

#endif

