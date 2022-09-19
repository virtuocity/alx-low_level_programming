#include "main.h"

/**
 * print_rev - print a string in reverse
 *@s:string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i > 0)
	{
	_putchar(*(s + i - 1));
	i--;
	}
	_putchar('\n');
}


