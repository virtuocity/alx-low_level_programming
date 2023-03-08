#include "main.h"

/**
  *strtow - print words in a string
  *
  *@str: string to parse
  *Return: pointer to pointer with words
  */
char **strtow(char *str)
{
	char **c;
	char *p;
	int i, j, k, m, lenw, word, count;

	lenw = 0;
	j = 0;
	m = 0;

	if (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		/* count number of words */
		if ((str[i] != ' ' && str[i + 1] != ' ') || (str[i + 1] == '\0'))
		{
			lenw++;
		}
	}
	c = (char **)malloc((lenw + 1) * sizeof(char *));
	if (c == NULL)
		return (NULL);
	for (word = 0; str[word] && j <= lenw; word++)
	{
		count = 0;
		if (str[word] != ' ')
		{
			for (i = word; str[i] != '\0'; i++)
			{
				if (str[i] == ' ')
					break;
				count++;
			}
			*(c + j) = (char *)malloc((count + 1) * sizeof(char));
			if (*(c + j) == NULL)
			{
				for (k = 0; k <= j; k++)
				{
					p = c[k];
					free(p);
				}
				free(c);
				return (NULL);
			}
			for (m = 0; word < i; word++)
			{
				c[j][m] = str[word];
				m++;
			}
			c[j][m] = '\0';
			j++;
		}

	}
	c[j] = NULL;
	return (c);

}


