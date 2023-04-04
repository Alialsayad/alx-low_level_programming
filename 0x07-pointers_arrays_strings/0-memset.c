#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer
 * @b: char
 * @n: unsigned int
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itc;

	for (itc = 0; n > 0; itc++)
	{
		s[itc] = b;
		n -= 1;
	}
	return (s);
}
