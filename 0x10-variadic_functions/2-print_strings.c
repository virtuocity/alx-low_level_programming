#include "variadic_functions.h"

/**
  *print_strings- print strings with a separator
  *
  *@separator: numbers separator
  *@n: number of strings to be printed
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *nil = "(nil)";
	char *p;
	unsigned int i;

	va_start(valist, n);
	i = 0;

	for (i = 0; i < n; i++)
	{
		p = va_arg(valist, char *);
		if (p == NULL)
			p = nil;
		if (i != (n - 1) && separator != NULL)
			printf("%s%s", p, separator);
		else
		printf("%s", p);
	}
	printf("\n");
	va_end(valist);
}
