#include "main.h"
#include <stdlib.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: a function that reallocates a memory block using malloc and free.
  */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newp, *oldp;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newp = malloc(new_size);
	if (newp == NULL)
		return (NULL);

	oldp = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		newp[i] = oldp[i];

	free(ptr);
	return (newp);
}

