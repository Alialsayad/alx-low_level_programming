#include "lists"

/**
 * add_nodeint - adds a node to the top
 * @head: pointer to first node
 * @n: value for new node.
 * Return: pointer to new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *al;

	al	= malloc(sizeof(listint_t));

	if (al == NULL)
		return (NULL);

	al->n = n;
	al->next = *head;
	*head = al;
	if (*head)
	return (al);
}
