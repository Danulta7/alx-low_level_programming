#include "lists.h"
#include <stdlib.h>

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the num. of nodes in a looped
 *			linked listint_t list
 * @head: head to a pointer
 *
 * Return: if the list is not looped - 0
 *		otherwise - the num. of nodes in the list
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *t, *h;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				nodes++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
				while (t != h)
				{
					nodes++;
					t = t->next;
				}

			return (nodes);
		}
		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: a pointer to the address of the head of list
 *
 * Return: the size of the list that was freed
 *
 * Description: the function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
