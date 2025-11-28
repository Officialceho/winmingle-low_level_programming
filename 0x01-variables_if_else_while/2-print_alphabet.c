#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Prints the lowercase alphabet followed by a new line.
*/

int main(void)
    {
        char c = 'a';

        while (c <= 'z')
            {
                putchar(c);
                c++;
            }
        putchar('\n');


        return (0);
    }      
