#include "main.h"

/**
  *malloc_checked - allocate memory using malloc()
  *
  *@b: number of bytes
  *Return: pointer to allocated mem space
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}

