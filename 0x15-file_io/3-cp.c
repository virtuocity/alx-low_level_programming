#include "main.h"
/**
 * main - copy from file1 to file2
 *@ac: number of arguments supplied to command line
 *@av: array of arguments supplied to command line
 * Return: void
 */
int main(int ac, char **av)
{
	int fd_read, fd_write, size_write;
	ssize_t size_read;
	char buf[1024];

	size_read = 1024;
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(av[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	fd_write = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}
	while (size_read == 1024)
	{
		size_read = read(fd_read, buf, 1024);
		if (size_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		size_write = write(fd_write, buf, size_read);
		if (size_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(fd_read) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		exit(100);
	}
	if (close(fd_write) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}
