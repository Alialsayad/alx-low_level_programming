#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the al element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *al;

	if (!head)
		return (NULL);

	al = malloc(sizeof(dlistint_t));
	if (!al)
		return (NULL);

	al->n = n;

	al->next = *head;
	al->prev = NULL;

	if (*head)
		(*head)->prev = al;

	*head = al;

	return (al);
}
