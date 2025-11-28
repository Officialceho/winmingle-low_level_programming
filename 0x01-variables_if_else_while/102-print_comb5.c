#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Prints all possible combinations of two two-digit numbers
* from 00 01 to 98 99 separated by comma and space.
*/

int main(void)
        {
            int a = 0, b = 1;
    

            while (a <= 98)
                {
                    b = a + 1;
                    while (b <= 99)
                        {
                            putchar('0' + a / 10);
                            putchar('0' + a % 10);
                            putchar(' ');
                            putchar('0' + b / 10);
                            putchar('0' + b % 10);
                            if (!(a == 98 && b == 99))
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
