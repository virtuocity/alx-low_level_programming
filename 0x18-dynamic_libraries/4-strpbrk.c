#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *
 *@s: string to be searched
 *@accept: string to be matched
 *Return: string matched
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	char *add = NULL;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				if (add == NULL)
					add = &(s[j]);
				if (&(s[j]) < add)
					add = &(s[j]);
			}
		}
	}
	return (add);
}
