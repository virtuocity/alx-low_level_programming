#include "main.h"

/**
  *_realloc - reallocate memory
  *
  *@ptr: pointer to old memory block
  *@old_size: old memory block size
  *@new_size: new memory block size
  *Return: pointer to new memory vlock
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *b = NULL;
	char *array = NULL;
	char *p = NULL;

	if (ptr == NULL)
	{
		array = malloc(new_size);
		if (array == NULL)
			return (NULL);
		return (array);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	b = malloc(new_size);
	if (b != NULL)
	{
		p = (char *)ptr;
		for (i = 0; i < old_size; i++)
			b[i] = p[i];
		free(ptr);
		return (b);
	}
	return (NULL);
}
