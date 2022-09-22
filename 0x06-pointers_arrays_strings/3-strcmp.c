#include "main.h"

/**
 * _strcmp -compare two strings
 *
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 * Return: digits depending on string comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	for (j = 0; s1[j] != '\0'; j++)
	{
		if (s1[j] - s2[j] != 0)
		{
			i = s1[j] - s2[j];
			break;
		}
	}
	if (i == 0 && s1[j] == '\0')
		i = s1[j] - s2[j];
	return (i);
}
