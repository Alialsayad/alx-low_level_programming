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

	for (itc = 0; n > 0; itc++)
	{
		dest[itc] = src[itc];
		n -= 1;
	}
	return (dest);
}
