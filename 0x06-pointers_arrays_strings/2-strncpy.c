#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: string to be copied into
 * @src: string to be copied
 * @n: number of bytes
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
