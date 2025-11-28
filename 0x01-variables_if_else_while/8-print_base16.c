#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Prints numbers of base 16 in lowercase..
*/

int main(void)
    {
        int n = 0;
        char c = 'a';

        while (n <= 9 )
            {
                putchar('0' + n);
                n++;
            }
        while (c <= 'f') 
            {
                putchar(c);
                c++;
            }
        putchar('\n');


        return (0);
    }      
