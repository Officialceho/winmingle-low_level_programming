#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * Author: Okoye Chijioke Henry
 * Program: WinMingle Community C Training.
 * Description: Adds a new node at the beginning of the list.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}

