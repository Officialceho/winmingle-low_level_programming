#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Prints all possible different combinations of two digits.
*/

int main(void)
    {
        int a = 0, b;


        while (a <= 9)
            {
                b = a + 1;
                while (b <= 9)
                    {
                        putchar('0' + a);
                        putchar('0' + b);
                       if (!(a == 8 && b == 9))    
                                {   
                                    putchar(',');
                                    putchar(' ');
                                }
                            b++;
                    }
                        a++;
            }   
        putchar('\n');


        return (0);
    }   
