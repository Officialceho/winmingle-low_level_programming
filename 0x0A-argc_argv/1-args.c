#include "main.h"
#include <stdio.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: A program that prints the number of arguments passed into it.
  */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

