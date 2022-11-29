#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function to free list
 * @head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *last;

	if (!head)
		return;

	while (*head != NULL)
	{
		last = *head;
		*head = (*head)->next;
		free(last);
	}
}
