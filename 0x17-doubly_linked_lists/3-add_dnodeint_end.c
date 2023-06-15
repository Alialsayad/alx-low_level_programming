#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 * @head: pointer to first node.
 * @n: given int to be added.
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *all;
	dlistint_t *temp;

	all = malloc(sizeof(dlistint_t));
	if (all == NULL)
		return (NULL);
	all->n = n;
	all->next = NULL;

	if (*head == NULL)
	{
		*head = all;
		all->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = all;
		all->prev = temp;
	}
	return (all);
}
