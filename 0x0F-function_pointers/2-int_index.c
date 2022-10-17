#include "function_pointers.h"

/**
  *int_index - searches for an integer in an array
  *
  *@array: array to search
  *@size: size of array
  *@cmp:pointer to finction used to compare values
  *Return: index
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, count;

	count = 0;
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				count++;
				return (i);
			}
		}
	}
	if (size <= 0 || count == 0)
		return (-1);
	else
		return (0);
}
