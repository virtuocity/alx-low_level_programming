#include "search_algos.h"

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
	size_t high_idx, mid_idx, low_idx;
	
	low_idx = 0;
	high_idx =size - 1;
	if (array == NULL)
		return (-1);
	for (low_idx = 0;low_idx < size;low_idx++)
	{
		printf("Searching in array: ");
		for(; low_idx < high_idx; low_idx++)
		{
			printf("%d, ", array[low_idx]);
		}
		printf("%d\n", array[low_idx]);
		mid_idx =(low_idx + high_idx)/2;
		printf("Mid index is: %ld", mid_idx);
		if (array[mid_idx] < value)
		{
			low_idx = mid_idx + 1;
		}
		else if(array[mid_idx] > value)
			high_idx = mid_idx + 1;
		else
			return (mid_idx);
	}
	return (-1);
}
