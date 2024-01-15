#include "main.h"
/**
 * _strcpy- copies string pointed to by src
 *@dest:points at a buffer that stores string from src
 *@src:points at buffer to be copied from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	i++;
	j = 0;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	return (&*dest);
}
