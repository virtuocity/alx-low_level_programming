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
	unsigned int i;

	va_start(valist, n);
	i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1) && separator != NULL)
			printf("%s%s", va_arg(valist, char *), separator);
		else
		printf("%s", va_arg(valist, char *));
	}
	printf("\n");
	va_end(valist);
}
