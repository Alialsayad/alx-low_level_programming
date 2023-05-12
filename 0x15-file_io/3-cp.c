#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 on failure
*/
int main(int ac, char **av)
{
	int file_from = 0, to_fd = 0;
	ssize_t a;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USUGE), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | PERMISSIONS);

	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[2]), exit(99);
	while ((b = read(file_from, buf, READ_BUF_SIZE)) > 0)

		if (write(to_fd, buf a) != a)
			dprintf(STDERR_FILENO, ERR_NOREAD, av[2]), exit(99);
	if (a == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	file_from = close(file_from);
	to_fd = close(to_fd);

	if (file_from)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_from), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_from), exit(100);
	return (EXIT_SUCCESS);
}
