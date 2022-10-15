#include "function_pointers.h"

/**
  *print_name - print a name, uses a function pointer passed
  * as one of two arguments
  *
  *@name: name to print
  *@f: function pointer to print function
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}



