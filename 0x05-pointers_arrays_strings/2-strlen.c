#include "main.h"

/**
 *_strlen - Calculate length of string
 *@s:pointer to the string whose length we want to know
 *
 * Return: i ,the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}


