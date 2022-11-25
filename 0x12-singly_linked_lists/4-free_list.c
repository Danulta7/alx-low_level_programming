#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: point to the beginning of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
