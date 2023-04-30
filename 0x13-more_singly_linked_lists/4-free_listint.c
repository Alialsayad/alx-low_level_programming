#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list of ints
 * @head: pointer to first node
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *al;

	while (head)
	{
		al = head;
		head = head->next;
		free(all);
	}
}
