#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list.
 * @head: current head address
 * @n: number to fill the node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *all;

	all = malloc(sizeof(dlistint_t));
	if (all == NULL)
		return (NULL);

	all->n = n;
	all->next = *head;
	all->prev = NULL;
	if (*head != NULL)
		(*head)->prev = all;

	*head = all;
	return (all);
}
