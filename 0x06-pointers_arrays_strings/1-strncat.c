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
	int i, j, lencat;

	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (*(src + j) != '\0')
	{
		j++;
	}
	if (n < 100)
	{
		lencat = i + n;
	}
	else 
		lencat = 1 + 100;
	j = 0;
	while (i < lencat)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
