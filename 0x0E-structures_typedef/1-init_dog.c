#include "dog.h"

/**
  *struct dog - a collection of records for dogs
  *
  *@name:name of dog
  *@age: age of dog
  *@owner:dog owner's name
  *
  *Description: stores the records of a dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
