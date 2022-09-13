#include "main.h"

/**
 * _abs - print the absolute of a number
 * @n: number whose abs value to be printed
 *
 *Return: absolute value of n
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-1 * n);

}
