#include "main.h"
#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: A program that prints _putchar, followed by a new line.
*/

int main(void){
    int i = 0;
    char c;
    
    char o[] = "_putchar";
    
    while (i <= 8){
         c = o[i];
         putchar(c);
         
        i++;
        }

    putchar('\n');
return 0;

}
