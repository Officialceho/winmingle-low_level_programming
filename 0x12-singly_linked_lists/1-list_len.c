#include "lists.h"

/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Returns number of nodes in a linked list.
 */



size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

