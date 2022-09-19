#include "main.h"

/**
 *print_array- print array
 *@a:pointer to array to be printed
 *@n: number of elements in array
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	j = 0;
	while (j < n)
	{
		if (j == (n - 1))
		{
			printf("%d", a[j]);
			j++;
		}
		else
		{
			printf("%d, ", a[j]);
			j++;
		}
	}
	printf("\n");
}


