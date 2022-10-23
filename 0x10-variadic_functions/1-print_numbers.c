#include "variadic_functions.h"

/**
  *print_numbers- print numbers with a separator
  *
  *@separator: numbers separator
  *@n: numbers to be printed
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(valist, unsigned int));
		else
		printf("%d%s", va_arg(valist, unsigned int), separator);
	}
	printf("\n");
	va_end(valist);
}
