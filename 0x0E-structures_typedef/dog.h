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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif/* MAIN_H */
