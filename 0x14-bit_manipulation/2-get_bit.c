#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, var;

	bit = 0;
	var = 0;
	if (index > 63)
		return (-1);
	/* right shift decimal by index to get bit at that position*/
	bit = (n >> index);
	var = bit & 1;
	if (var)
		return (1);
	else
		return (0);
	return (-1);
}
