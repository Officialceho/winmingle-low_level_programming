#include "lists.h"
#include <stdlib.h>

/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Frees an entire linked list from memory.
 */



void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

