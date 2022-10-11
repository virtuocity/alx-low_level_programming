#include "dog.h"

/**
  *init_dog - initialise dog structure
  *
  *@d:pointer to struct dog
  *@name: name of dog
  *@age: age of dog
  *@owner:dog owner's name
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
