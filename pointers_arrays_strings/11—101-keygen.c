#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Prints a random sequence of characters.
  */

int main(void)
{
    int i, len;
    char c;

    srand(time(0));
    len = 10 + rand() % 10;

    for (i = 0; i < len; i++)
    {
        c = (rand() % 94) + 33;
        putchar(c);
    }
    putchar('\n');

    return (0);
}
