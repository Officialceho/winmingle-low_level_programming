#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: Prints the last digit of a random number n and describes it.
*/


int main(void)
    {
        int n, last;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        last = n % 10;
    if (last < 0)
        last = -last;
            printf("Last digit of %d is %d and is ", n, last);
    if (last > 5)
            printf("greater than 5\n");
    else if (last == 0)
            printf("0\n");
    else
            printf("less than 6 and not 0\n");


return (0);
}
