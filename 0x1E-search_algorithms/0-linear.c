#include "search_algos.h"

/**
  *linear_search- search array using linear search algo
  *
  *@array: input array
  *@size: size of array
  *@value: search item
  *Return: first index where value is located
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

