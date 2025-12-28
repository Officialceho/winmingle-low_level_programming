#include "main.h"

/**
   * Author: Okoye Chijioke Henry
   * Program: WinMingle Community C Training.
   * Description: Locate character in string; return pointer to first occurrence or NULL.
   */


char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (0);
}
