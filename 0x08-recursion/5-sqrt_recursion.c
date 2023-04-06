#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * @va: squate root
 * Return: int
 */
int square(int n, int va);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square -find square root
 * @n: int to find square root
 * @va: square root
 * Return: int
 */

int square(int n, int va)
{
	if (va * va == n)
		return (va);
	else if (va * va < n)
		return (square(n, val + 1));
else
	return (-1);
}
