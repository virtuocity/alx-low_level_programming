#include "main.h"

/**
 *array_range - creates an array of integers
 *
 *@min: minimum
 *@max: maximum
 *Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int i;
	int range;
	int idx;
	int *p = NULL;

	idx = 0;
	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	p = (int *)malloc(range * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[idx] = i;
		idx++;
	}
	return (p);
}
