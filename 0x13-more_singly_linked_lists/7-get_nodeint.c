#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth nodes
 *			of a listint_t linked list
 * @head: input
 * @index: the returing index
 * Return: NUII
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temporal;

	while (head)
	{
	temporal = head;
	if (i == index)
	return (temporal);
	head = head->next;
	i++;
	}
	return (NULL);
}
