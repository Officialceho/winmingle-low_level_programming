#include <stdio.h>

/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Prints a message before main executes.
 */



void first_message(void) __attribute__((constructor));

void first_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

