#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: name of file to append text to
 * @text_content: content to append to file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, size;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	size = write(fd, text_content, i);
	if (size == -1)
		return (-1);
	close(fd);
	return (1);
}
