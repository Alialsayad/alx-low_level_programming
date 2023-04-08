#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the num of args positive numbers
 * @argv: int
 * @argc: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int s, num = 0;
	char *e;

	if (argc > 1)
	{
	for (a = 1; a < argc; a++)
	{
		e = argv{a};

		for (s = 0; s < strlen(e); s++)
		{
			if (e[s] < 48 || e[s] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(e);
		e++;
	}
	printf("%d\n", num)
	}
	else
	{
	printf("0\n");
	}
	return (0);
}

