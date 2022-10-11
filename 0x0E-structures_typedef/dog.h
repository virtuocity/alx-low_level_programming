#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

/**
  *struct dog - a collection of records for dogs
  *
  *@name:name of dog
  *@age: age of dog
  *@owner:dog owner's name
  *
  *Description: stores the records of a dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif/* MAIN_H */
