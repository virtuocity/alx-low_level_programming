#include "dog.h"
/**
  *new_dog- copy names of my_dog into new dog
  *
  *@name:name to be copied
  *@age:age to be copied
  *@owner:owner's name to be copied
  *Return: pointer to struct dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *jina;
	char *mwenyewe;
	int i, j, k, l;
	struct dog *poppy;

	poppy = malloc(sizeof(struct dog));
	if (poppy == NULL)
		return (NULL);
	for (i = 0; *(name + i) != '\0'; i++)
		;
	for (j = 0; *(owner + j) != '\0'; j++)
		;
	jina = malloc(i + 1);
	if (jina != NULL)
	{
		for (k = 0; k <= i; k++)
			*(jina + k) = *(name + k);
	}
	else
	{
		free(poppy);
		return (NULL);
	}
	mwenyewe = malloc(j + 1);
	if (mwenyewe != NULL)
	{
		for (l = 0; l <= j; l++)
			*(mwenyewe + l) = *(owner + l);
	}
	else
	{
		free(jina);
		free(poppy);
		return (NULL);
	}
	poppy->name = jina;
	poppy->age = age;
	poppy->owner = mwenyewe;
	return (poppy);
}
