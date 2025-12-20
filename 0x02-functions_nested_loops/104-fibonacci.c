#include <stdio.h>


/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: A  program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
*/


int main(void)
{
    unsigned long a1 = 1, b1 = 2;
    unsigned long a2 = 0, b2 = 0;
    unsigned long sum1, sum2;
    int i;

    printf("1, 2");

    for (i = 3; i <= 98; i++)
    {
        sum1 = a1 + b1;
        sum2 = a2 + b2;

        if (sum1 > 999999999)
        {
            sum1 %= 1000000000;
            sum2 += 1;
        }

        if (sum2 > 0)
            printf(", %lu%09lu", sum2, sum1);
        else
            printf(", %lu", sum1);

        a1 = b1;
        a2 = b2;
        b1 = sum1;
        b2 = sum2;
    }

    printf("\n");
    return 0;
}

