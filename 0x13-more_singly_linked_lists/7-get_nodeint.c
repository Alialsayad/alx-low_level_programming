#include "lists.h"

/**
 * get_nodeint_at_index - return node at index
 * @head: pointer to first node
 * @index: inedx of node to get
 *
 * Return: pointer to node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int a;

	for (node = head, a = 0; node && a < index; node = node->next, a++)
		;
	return (node);
}
