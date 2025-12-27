#include "main.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Handles signs and numeric characters only.
  */

int _atoi(char *s)
{
    int sign = 1, i = 0;
    unsigned int num = 0;

    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        num = (num * 10) + (s[i] - '0');
        i++;
    }

    return (num * sign);
}
