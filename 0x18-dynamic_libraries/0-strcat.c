#include "main.h"

/**
 * *_strcat - pointer fxn to append the src string to dest string
 *
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
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
	lencat = i + j;
	j = 0;
	while (i < lencat)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
