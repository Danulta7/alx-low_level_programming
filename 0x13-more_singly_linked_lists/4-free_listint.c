#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}
}
