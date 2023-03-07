#include "main.h"
/*
*argstostr - concatenate arguments
*@ac: argument count
*@av: argument vector
*Return: New concatenated string of args
*/
char *argstostr(int ac, char **av)
{
	char *c;
	int i, j, k, len;

	k = 0;
	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
        	{
            		len++;
        	}
    	}
	c = (char *)malloc(len + ac + 1 * sizeof(char));
	if (c == NULL)
        	return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			c[k] = av[i][j];
			k++;
		}
		c[k] = '\n';
		k++;
	}
	c[k] = '\0';
	return (c);
}
