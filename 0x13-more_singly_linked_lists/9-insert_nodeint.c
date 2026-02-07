/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Inserts a node at a specific index.
 */

#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp = *head;

	if (idx == 0)
		return (add_nodeint(head, n));

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}

