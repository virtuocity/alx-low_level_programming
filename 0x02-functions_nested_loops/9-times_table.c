#include "main.h"
#include <stdio.h>
/**
 * times_table - print 9 times table
 * @void: no input
 * Return: void just print table
 */
void times_table(void)
{
	int i;
	int j;
	int mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			if (mult > 9)
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else
			{
				if (j == 0)
				{
					_putchar(mult + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(mult + '0');
			}
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar ('\n');
	}
}
