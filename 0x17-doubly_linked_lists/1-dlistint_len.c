#include "lists.h"

/**
 * dlistint_len - returns the number of all in a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of all
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t all = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (all);
}
