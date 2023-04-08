#include <stdio.h>
/**
 * main - prints a number, followed by a new line
 * @argv: int
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
