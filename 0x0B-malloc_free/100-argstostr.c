#include "main.h"
#include <stdlib.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description:  build a single string consisting of all arguments separated by \n.
  */



char *argstostr(int ac, char **av)
{
    int i, j, k = 0, len = 0;
    char *str;

    if (ac == 0 || !av)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            len++;
        len++; /* for '\n' */
    }

    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            str[k++] = av[i][j];
        str[k++] = '\n';
    }
    str[k] = '\0';

    return str;
}

