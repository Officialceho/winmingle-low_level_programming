#include "main.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: a function that returns 1 if a string is a palindrome and 0 if not.
  */

int _strlen_recursion(char *s);

int check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);

	return (check(s, start + 1, end - 1));
}

int is_palindrome(char *s)
{
	return (check(s, 0, _strlen_recursion(s) - 1));
}

