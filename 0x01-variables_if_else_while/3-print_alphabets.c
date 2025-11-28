#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Prints lowercase then uppercase alphabet followed by newline.
*/

int main(void)
    {
        char c = 'a';

        while (c <= 'z')
            {
                putchar(c);
                c++;
            }
        c = 'A';
        while (c <= 'Z')
            {
                putchar(c);
                c++;
            }
        putchar('\n');

        return (0);
    }
