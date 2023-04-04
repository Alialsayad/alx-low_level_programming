#include "holberton.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itc;

	for (itc = 0; itc < n; itc++)
	{
		dest[itc] = src[itc];
	}
	return (dest);
}
