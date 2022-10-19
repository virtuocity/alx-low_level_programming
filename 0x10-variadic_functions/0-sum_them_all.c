#include "variadic_functions.h"

/**
  *sum_them_all- sum all numbers passed as extra args
  *
  *@n:number of args
  *Return:sum of numbers passed
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;
	/* pointer to  argument list */
	va_list p;

	sum = 0;
	/* initialise arguments to list pointer */
	va_start(p, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(p, unsigned int);
	va_end(p);
	return (sum);

}
