#include "main.h"
#include <stdio.h>
/**
 * times_table - print 9 times table
 * @void: no input
 * Return: void just print table
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j < 9)
			{
				printf("%2d, ", product);
			}
			else
				printf("%2d", product);
		}
		printf("\n");
	}
}

