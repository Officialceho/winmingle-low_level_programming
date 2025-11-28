#include <stdio.h>

/**
* Author: Okoye Chijioke Henry 
* Program: WinMingle Community C Training
* Description: Prints digits 0-9 using only putchar and no char variables.
*/

int main(void)
  {
      int n = 0;

            while (n <= 9)
                {
                    putchar('0' + n);
                    n++;
                }
      putchar('\n');
      return 0;
  }    
