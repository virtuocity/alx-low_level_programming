#include "main.h"

/**
  *_strspn -gets the length of a prefix substring
  *
  *@s:initial segment
  *@accept: substring of s?
  *Return: number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int lens;
	unsigned int lena;

	/*get length of string s stored in uint lens*/
	for (lens = 0; s[lens] != '\0'; lens++)
	{
	}
	/*get length of string accept stored int lena*/
	for (lena = 0; accept[lena] != '\0'; lena++)
	{
	}
	for (i = 0; i < lens; i++)
	{
		for (j = 0, k = 0; j < lena; j++)
		{
			if (s[i] == accept[j])
				k++;
		}
		if (k == 0)
			return (i);
	}
	return (i);
}
