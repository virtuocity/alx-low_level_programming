#include "main.h"

/**
 * _strncat - pointer fxn to append the src string to dest string
 *
 * @dest: first string
 * @src: second string
 * @n:number of bytes from src to append to dest
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
