#include "main.h"
/**
  *read_textfile - read a text file and output to stdout
  *
  *@filename:the file to read
  *@letters: number of letters to read
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes, size;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	fildes = open(filename, 0);
	if (fildes == -1)
		return (0);
	size = write(STDOUT_FILENO, buf, read(fildes, buf, letters));
	if (size == -1)
		return (0);
	close(fildes);
	free(buf);
	return (size);
}

