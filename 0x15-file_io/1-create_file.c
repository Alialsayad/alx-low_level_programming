#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);

	while (*s++)
		a++;
	return (a);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write.
 *
 * Return: 1 on success. 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t all = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (len)
		all = write(fd, text_content, len);
	close(fd);

	return (all == len ? 1 : -1);
}
