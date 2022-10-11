#include "dog.h"

/**
  *print_dog-print dog record
  *
  *@d: pointer to struct dog
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)");
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		printf("Owner: %s\n", d->owner);
	}
}
