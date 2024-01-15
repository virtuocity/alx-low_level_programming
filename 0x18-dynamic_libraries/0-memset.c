#include "main.h"
/**
  *_memset- fills memory with a constant byte
  *
  *@s:string s
  *@b: byte to fill mem with
  *@n: number of bytes pointed to by s
  *Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
