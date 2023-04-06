#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: pointer the 8tring
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s > '\0')
	{
		a += _strlen_recursion(s + 1) + 1;
	}
	return (a);
}

