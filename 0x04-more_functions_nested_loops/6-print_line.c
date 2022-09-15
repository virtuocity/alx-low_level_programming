#include "main.h"
/**
 * print_line-draw a straight line in the terminal
 *
 * @n :the number of times xter - is printed
 * Return: void
 */
void print_line(int n)
{
	int i;
	char c = '_';

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
			_putchar(c);
	}
	_putchar('\n');

}
