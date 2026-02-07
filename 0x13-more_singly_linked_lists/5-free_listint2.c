/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Frees list and sets head to NULL.
 */

#include "lists.h"
#include <stdlib.h>

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}

