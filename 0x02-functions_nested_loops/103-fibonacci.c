#include <stdio.h>


/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description:  A program that finds and prints the sum of the even-valued terms, followed by a new line.
*/

int main(void)
{
    unsigned long int a = 1, b = 2, next;
    unsigned long int sum = 0;

    while (a <= 4000000)
    {
        if (a % 2 == 0)
            sum += a;

        next = a + b;
        a = b;
        b = next;
    }

    printf("%lu\n", sum);

    return 0;
}

