#include "main.h"

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training.
* Description: A function that prints the last digit of a number.
*/


int print_last_digit(int n){
        
        int last;

        if (n < 0)
              n = -n;

        last = 0 % 10;

    _putchar(last + '0');
    return last;

}
