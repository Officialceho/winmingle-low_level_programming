#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: Print the opcodes of your own main function.
  */

int main(int argc, char *argv[])
{
    int bytes, i;
    unsigned char *ptr = (unsigned char *)main;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    bytes = atoi(argv[1]);
    if (bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    for (i = 0; i < bytes; i++)
    {
        printf("%02x", ptr[i]);
        if (i != bytes - 1)
            printf(" ");
    }
    printf("\n");
    return (0);
}

