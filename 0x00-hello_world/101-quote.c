/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training
 * Description: Prints a quote to standard error
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}

