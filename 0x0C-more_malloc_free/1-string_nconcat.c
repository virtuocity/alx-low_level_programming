#include "main.h"

/**
 *string_nconcat - concatenate two strings
 *
 *@s1:string one
 *@s2:string two
 *@n: n bytes of string two
 *Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l, new_n;
	char *c;

	k = 0;
	if (s1 == NULL)
	{
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		*s2 = '\0';
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (l = 0; s2[l] != '\0'; l++)
		;
	if (l >= n)
	{
		new_n = l;
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			new_n++;
		}
	}
	c = (char *)malloc((i + l + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
	{
		c[j] = s1[j];
	}
	for (k = 0; k < new_n; j++)
	{
		c[j] = s2[k];
		k++;
	}
	c[j] = '\0';
	return (c);

}
