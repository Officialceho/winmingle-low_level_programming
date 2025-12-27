#include "main.h"

/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Counts characters until the null terminator.
 */


int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}
