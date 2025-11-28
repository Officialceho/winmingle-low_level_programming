#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Assign a random number to n and prints whether the
* number is positive, zero, or negative.
*/
int main(void)
    {
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;


        if (n > 0)
            printf("%d is positive\n", n);
        else if (n == 0)
            printf("%d is zero\n", n);
        else
            printf("%d is negative\n", n);


        return (0);
    }    
