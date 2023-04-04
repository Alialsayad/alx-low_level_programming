#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 *@a: first value -char
 *
 */
void print_chessboard(char (*a)[8])
{
	int ia, js;

	for (ia = 0; ia < 8; ia++)
	{
		for (js = 0; js < 8; js++)
		{
			_putchar (a[ia][js]);
		}
		_putchar('\n');
	}
}
