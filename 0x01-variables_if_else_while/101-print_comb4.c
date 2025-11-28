#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Prints all possible different combinations of three digits.
*/

int main(void)
        {
            int a = 0, b, c;


            while (a <= 7)
                {
                    b = a + 1;
                    while (b <= 8)
                        {
                            c = b + 1;
                            while (c <= 9)
                                {
                                    putchar('0' + a);
                                    putchar('0' + b);
                                    putchar('0' + c);
                                    if (!(a == 7 && b == 8 && c == 9))
                                        {
                                            putchar(',');
                                            putchar(' ');
                                        }           
                                    c++;
                                }   
                            b++;
                        }
                    a++;
                }
            putchar('\n');


            return (0);
        }
