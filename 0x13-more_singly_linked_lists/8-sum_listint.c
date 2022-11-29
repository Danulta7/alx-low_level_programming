#include "lists.h"

/**
 * sum_listint - a function that return the sum of all the
 *		data (n) of the linked listint_t list
 * @head: the head
 * Return: always (0) sucess
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
