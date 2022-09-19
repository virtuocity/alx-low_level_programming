#include "main.h"

/**
 * rev_string - print a string(array of characters) in reverse
 *@s:string to be printed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, tmp;
	int length;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	length = i - 1;
	for (j = 0; j < length / 2; j++)
	{
		tmp = s[j];
		s[j] = s[length];
		s[length--] = tmp;
	}
}


