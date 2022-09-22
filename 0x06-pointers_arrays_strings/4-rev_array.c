#include "main.h"

/**
 * reverse_array- reverse the order of elements
 *
 * @a: array to be reversed
 * @n:the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int arr[1000];

	j = 0;
	while (j < n)
	{
		arr[j] = a[j];
		j++;
	}

	i = 0;
	while (i < n)
	{
		a[i] = arr[j - 1];
		j--;
		i++;
	}
}
