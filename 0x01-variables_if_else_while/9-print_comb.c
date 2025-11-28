#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Print all possible combinations of single-digit numbers separated by commas and spaces.
*/

int main(void)
       {
            int m = 0;
            while (m <= 9)
                { 
                    printf("%d,", m);
                    m++;
                }
            printf("\n");
            return 0;
        }
