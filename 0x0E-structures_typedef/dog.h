#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
  *struct dog - initialize struct dog
  *@name:name type char
  *@age: age type float
  *@owner:dog owner's name type char
  *
  *Description: name, age and owner of a dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/*void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);*/

#endif /* DOG_H */
