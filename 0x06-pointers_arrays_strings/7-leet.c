#include "main.h"

/**
 * leet-encode a string into 1337 encoding
 *
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;
	int j;
	char arr1[] = {'a', 'A', 'E', 'e', 'o', 'O', 't', 'T', 'L', 'l'};
	char arr2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == arr1[j])
			s[i] = arr2[j];
		}
	}
	return (s);
}
