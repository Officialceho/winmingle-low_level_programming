/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Deletes a node at a specific index.
 */

#include "lists.h"
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head, *del;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp || !temp->next)
		return (-1);

	del = temp->next;
	temp->next = del->next;
	free(del);

	return (1);
}

