#include "search_algos.h"

/**
 * printarray - print array elements
 * 
 * @array: array to print
 * @low: first index of array 
 * @high: last index of array 
 * Return: void
 */

void printarray(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (low = 0; low < high; low++)
	{
		printf("%d, ", array[low]);
	}	
	printf("%d\n", array[low]);
}

/**
  *binary_search - search array using binary search algo
  *
  *@array: pointer to input array
  *@size: num of elements in array sizeof(ayray)/sizeofarray[0]
  *@value: search item
  *Return: index of value which is an integer
  */
int binary_search(int *array, size_t size, int value)
{

	size_t low_idx, high_idx, mid_idx;

	if (array == NULL)
		return (-1);
	high_idx = size - 1;
	for (low_idx = 0; low_idx < size;)
	{
		printarray(array, low_idx, high_idx);
		mid_idx = (low_idx + high_idx) / 2;
		if (array[mid_idx] < value)
			low_idx = mid_idx + 1;
		else if (array[mid_idx] > value)
			high_idx = mid_idx - 1;
		else
			return (mid_idx);
	}
	return (-1);
}
