#include "main.h"
/**
 * print_square - print squares and new lines
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int i, j;
	char c;

	c = '#';
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
		if (size <= 0)
		{
			_putchar('\n');
		}
}
