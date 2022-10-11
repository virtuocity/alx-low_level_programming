#include "dog.h"
/**
  *free_dog- free dog structure
  *
  *@d: pointer to dog_t dog alias
  *Return: void
  */
void free_dog(dog_t *d)
{
	/* Check if pointer to struct, d is NULL*/
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		/* free the pointer to struct itself,what implications?*/
		free(d);
	}
}
