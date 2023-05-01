#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int a;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	a = tp->n;
	free(tp);
	return (a);
}
