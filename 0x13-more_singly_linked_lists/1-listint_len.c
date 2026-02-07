/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Returns the number of nodes in a linked list.
 */

#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

