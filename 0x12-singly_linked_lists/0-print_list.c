#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @a: the streng whose length to check
 *
 * Return: integer length of string
*/
int _strlen(char *a)
{
	int b = 0;

	if (!a)
		return (0);
	while (*a++)
		b++;
	return (b);
}
/**
 * print_list - Prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		a++;
	}
	return (a);
}
