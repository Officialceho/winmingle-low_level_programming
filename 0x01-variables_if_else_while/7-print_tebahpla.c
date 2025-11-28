#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Prints the lowercase alphabet in reverse, followed by a new line.
*/

int main(void)
    {
        char c = 'z';

        while (c >= 'a')
            {
                putchar(c);
                c--;
            }
        putchar('\n');


        return (0);
    }      
