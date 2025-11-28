#include <stdio.h>

/** 
* Author Name: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Prints the lowercase alphabet excluding 'q' and 'e'.
*/

int main(void)
        {
            char c = 'a';
            
            while (c <= 'z')
                { 
                    if (c != 'e' && c != 'q')
                        putchar(c);
                    c++;
                    
                }
            putchar('\n');

            return 0;
        }
