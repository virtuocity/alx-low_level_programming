#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *@n:number of times to print '\'
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	char k;
	char s;
	int j;

	k = '\\';
	s = ' ';
	for (i = 0; i < n; i++)
	{
		if (n > 1)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(s);
			}
			_putchar(k);
			_putchar('\n');
		}
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
