#include "main.h"
#include <stdio.h>

/*
 * print_times_table- print the multiplication table
 *
 * @n: number of lines
 * Return: void
 */
void print_times_table(int n)
{ 
	int i,j,product;

	if ((n < 0) || (n >= 15))
	{
		printf(" ");
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
		
			for (j = 0; j <= n; j++)
			{
				product = i*j;
				if (j < n)
				{
					printf("%d,\t", product);
				}
				else
					printf("%d", product);
			}
			printf("\n");
		}
		
	}
}
