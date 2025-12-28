#include " main.h"

/**
   * Author: Okoye Chijioke Henry
   * Program: WinMingle Community C Training.
   * Description:Locate substring needle in haystack.
   */


char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (0);
}
