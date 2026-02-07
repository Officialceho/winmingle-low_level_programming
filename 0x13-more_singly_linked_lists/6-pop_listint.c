/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Deletes head node and returns its value.
 */

#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	temp = *head;
	value = temp->n;

	*head = temp->next;
	free(temp);

	return (value);
}

