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
	char *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
