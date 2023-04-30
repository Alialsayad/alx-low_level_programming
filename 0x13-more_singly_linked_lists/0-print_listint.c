#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @h: pionter to first node
 *
 * Return: size of list
*/
size_t print_listint(const listint_t *h)
{
	size_t a = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
