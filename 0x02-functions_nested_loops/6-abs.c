#include "main.h"

/**
 * _abs - print the absolute of a number
 * @int: number whose abs value to be printed 
 *
 *Return: int 
 *-1 and prints - if n is less than 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n > 0)
		return n;
	else
		return -1*n;

}
