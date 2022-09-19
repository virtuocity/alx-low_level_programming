#include "main.h"

/**
 * rev_string - print a string(array of characters) in reverse
 *@s:string to be printed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (j < i)
	{
		*(s + j) = *(s + i - 1);
		j++;
	}
}


