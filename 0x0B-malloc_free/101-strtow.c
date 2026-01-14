#include "main.h"
#include <stdlib.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: break a string into separate words and return a NULL-terminated array of strings.
  */


static int word_count(char *s)
{
    int i = 0, count = 0;

    while (s[i])
    {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            count++;
        i++;
    }
    return count;
}

char **strtow(char *str)
{
    char **words;
    int i = 0, j, k, w, len;

    if (!str || !*str)
        return NULL;

    w = word_count(str);
    if (w == 0)
        return NULL;

    words = malloc((w + 1) * sizeof(char *));
    if (!words)
        return NULL;

    for (i = 0, k = 0; k < w; k++)
    {
        while (str[i] == ' ')
            i++;

        for (len = 0; str[i + len] && str[i + len] != ' '; len++)
            ;

        words[k] = malloc((len + 1) * sizeof(char));
        if (!words[k])
        {
            while (k--)
                free(words[k]);
            free(words);
            return NULL;
        }

        for (j = 0; j < len; j++)
            words[k][j] = str[i++];
        words[k][j] = '\0';
    }
    words[k] = NULL;
    return words;
}

