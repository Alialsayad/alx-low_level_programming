#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the number of argumentd
 * @...: the integers to sum
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list as;

	if (!n)
		return (0);

	va_start(as, n);
	while (i--)
		s += va_arg(as, int);
	va_end(as);

	return (s);
}
