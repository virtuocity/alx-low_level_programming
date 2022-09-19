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
	char c[500];

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (j < i)
	{
		c[j] = *(s + j);
		j++;
	}

	j = 0;
	while (i > 0)
	{
		s[j] = c[i - 1];
		i--;
		j++;
	}
}


