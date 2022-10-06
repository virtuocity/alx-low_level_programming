#include "main.h"
/**
 *_strdup- copy string
 *
 *@str : pointer to string
 *Return: pointer to copy of string
 */
char *_strdup(char *str)
{
	char *s = NULL;/*good coding art init to NULL*/
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
	{
	}
	/* assign n bytes- length of str + 1 to string s*/
	s = (char *)malloc(n + 1 * sizeof(char));
	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			s[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	s[i] = '\0';
	return (s);
}
