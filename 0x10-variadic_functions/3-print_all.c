#include "variadic_functions.h"
/**
 * print_char - print a character
 *@va:character
 *
 * Return: no return
 */
void print_char(va_list va)
{
	int c;

	c = va_arg(va, int);
	printf("%c", c);
}

/**
 * print_integer - print an integer
 *@va:number 1
 *
 * Return: no return
 */
void print_integer(va_list va)
{
	printf("%d", va_arg(va, int));
}

/**
 * print_float - print a float
 *@va:float number
 *
 * Return: no return
 */
void print_float(va_list va)
{
	double c;

	c = va_arg(va, double);
	printf("%f", c);
}
/**
 * print_string - print a string
 *@va: pointer to arg
 *
 * Return: no return
 */
void print_string(va_list va)
{
	char *s = va_arg(va, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}



/**
  *print_all-prints anything
  *
  *@format: a list of types of argument
  *Return: void
  */
void print_all(const char * const format, ...)
{
	int i, j, count;
	va_list valist;
	types difftypes[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		};
	char *s = "";

	i = 0;
	count = 0;
	va_start(valist, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == difftypes[j].t)
			{
				printf("%s", s);
				difftypes[j].f(valist);
				s = ", ";
				count++;
				break;
			}
			j++;

		}
		i++;
	}
	printf("\n");
}
