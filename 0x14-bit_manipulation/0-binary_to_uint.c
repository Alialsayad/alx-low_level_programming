#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the unsigned int form of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int all = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		all = all * 2 + (*b++ - '0');
	}
	return (all);
}
