#include "main.h"

/**
  *_calloc - allocate space to array of nmemb elements
  *
  *@nmemb: number of elements
  *@size: size of each member
  *Return: pointer to allocated space
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	char *arr = NULL;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	arr = malloc(j);
	p = (char *)arr;
	if (p != NULL)
	{
		for (i = 0; i < j; i++)
		{
			*(p + i) = 0;
		}
		return (p);
	}
	return (NULL);
}
