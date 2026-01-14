#include <stdio.h>
#include "variadic_functions.h"
/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Prints anything based on format string: char, int, float, string
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;

    va_start(args, format);
    while (format != NULL && format[i] != '\0')
    {
        if (i > 0 && format[i] != '\0')
            printf(", ");

        if (format[i] == 'c')
            printf("%c", va_arg(args, int));
        else if (format[i] == 'i')
            printf("%d", va_arg(args, int));
        else if (format[i] == 'f')
            printf("%f", va_arg(args, double));
        else if (format[i] == 's')
        {
            str = va_arg(args, char *);
            if (str == NULL)
                printf("(nil)");
            else
                printf("%s", str);
        }
        else
            i++;  /* Skip unknown format */
        i++;
    }
    va_end(args);
    printf("\n");
}

