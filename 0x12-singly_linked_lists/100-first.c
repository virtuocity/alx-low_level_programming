#include "lists.h"

/**
  *call_first - call before main
  *
  *Return: void
  */
void __attribute__((constructor)) call_first()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

