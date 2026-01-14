#include "main.h"
#include <stdlib.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: return a heap-allocated copy of a string.
  */

char *_strdup(char *str)
{
    char *dup;
    int i, len = 0;

    if (!str)
        return NULL;

    while (str[len])
        len++;

    dup = malloc((len + 1) * sizeof(char));
    if (!dup)
        return NULL;

    for (i = 0; i <= len; i++)
        dup[i] = str[i];

    return dup;
}

