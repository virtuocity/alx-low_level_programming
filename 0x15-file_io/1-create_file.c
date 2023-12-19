#include "main.h"
/**
 * create_file - Create a file object
 *
 * @filename: file name
 * @text_content: content to be written to file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
    int fd, size, i;
    char *buf;

    if (filename == NULL)
        return (-1);
    if (text_content == NULL)
    /* create an empty file */
    {
        fd = open(filename, O_CREAT, 0600);
        if (fd == -1)
            return (-1);
        return (1);
    }
    for(i = 0; text_content[i] != '\0'; i++)
        ;
    buf = malloc(i * sizeof(char));
    if (buf == NULL)
        return (-1);
    /* create file */
    fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
    if (fd == -1)
        return (-1);
    size = write(fd, text_content, i);
    if (size == -1)
        return (-1);
    close(fd);
    free(buf);
    return (1);
}