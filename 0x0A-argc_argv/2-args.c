#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
