#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the al element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *al;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);

	al = malloc(sizeof(dlistint_t));
	if (!al)
		return (NULL);

	al->n = n;
	al->next = NULL;

	if (*head == NULL)
	{
		al->prev = NULL;
		*head = al;
		return (al);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = al;
	al->prev = temp;

	return (al);
}
