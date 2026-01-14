#include "main.h"
#include <stdlib.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description:  allocate and return a new string containing s1 followed by s2.
  */


char *str_concat(char *s1, char *s2)
{
    char *res;
    int i, j, len1 = 0, len2 = 0;

    if (!s1)
        s1 = "";
    if (!s2)
        s2 = "";

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    res = malloc((len1 + len2 + 1) * sizeof(char));
    if (!res)
        return NULL;

    for (i = 0; i < len1; i++)
        res[i] = s1[i];
    for (j = 0; j < len2; j++)
        res[i + j] = s2[j];

    res[i + j] = '\0';
    return res;
}

