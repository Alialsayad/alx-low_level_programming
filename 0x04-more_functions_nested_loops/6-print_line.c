/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of _
 * Return: void
*/

void print_line(int n)
{
	int counter = 0;

	while (counter < n)
	{
		putchar('');
		counter++;
	}
	_putchar('\n');
}
