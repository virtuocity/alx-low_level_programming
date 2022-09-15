#include "main.h"
/**
 *print_triangle - print a triangle using #
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;
	char c;

	c = '#';
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + i) < size)
				_putchar(' ');
			if ((j + i) >= size)
				_putchar(c);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
