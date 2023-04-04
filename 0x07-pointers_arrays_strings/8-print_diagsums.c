#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: first value -char
 *@size: second value -int
 */
void print_diagsums(int *a, int size)
{
	int ia, js, suma_1 = 0, suma_2 = 0, k, l = 0;

	k = size - 1;
	for (ia = 0; ia < size; ia++)
	{
		for (js = 0; js < size; js++)
		{
			if (ia == js)
				suma_1 += a[l];
			if (js == k)
				suma_2 += a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", suma_1, suma_2);
}
