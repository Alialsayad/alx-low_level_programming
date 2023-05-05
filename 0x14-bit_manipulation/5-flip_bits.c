#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one
 * @m: number two
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int all = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			all++;
		xorval = xorval >> 1;
	}
	return (all);
}
