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
	unsigned int i, j;
	char *arr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	arr = (char *) malloc(j);
	if (arr != NULL)
	{
		for (i = 0; i < j; i++)
		{
			*(arr + i) = 0;
		}
		return (arr);
	}
	return (NULL);
}
