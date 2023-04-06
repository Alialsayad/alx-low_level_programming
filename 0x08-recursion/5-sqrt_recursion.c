#include "holberton.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @b: same number as n
 * @a: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt2(int b, int a)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (sqrt2(b, a + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
