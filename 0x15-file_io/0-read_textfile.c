#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads text form a file and prints it
 * @filename: name of file to read
 * @letters: number of letters all to read
 *
 * Return: number all read/printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fa;
	ssize_t all;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fa = open(filename, O_RDONLY);
	if (fa == -1)
		return (0);
	all = read(fa, &buf[0], letters);
	all = write(STDOUT_FILENO, &buf[0], all);
	close(fa);
	return (all);
}
