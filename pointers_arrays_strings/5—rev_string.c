#include "main.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Swaps characters from both ends toward the center.
  */

void rev_string(char *s)
{
    int i = 0, j;
    char tmp;

    while (s[i] != '\0')
        i++;

    for (j = 0; j < i / 2; j++)
    {
        tmp = s[j];
        s[j] = s[i - 1 - j];
        s[i - 1 - j] = tmp;
    }
}
