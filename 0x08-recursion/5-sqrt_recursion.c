#include "main.h"

/**
  *compare - cpompare two integers to check whether one
  * is the square of another
  *@n: input integer
  *@x: multiplicant
  *Return: sqrt
  */
int compare(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	return (compare(n, x + 1));
}
/*
 *_sqrt_recursion
 *
 *@n: look for sqrt of n
 *Return: squareroot
 */
int _sqrt_recursion(int n)
{
	return (compare(n, 1));
}
