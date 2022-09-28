#include "main.h"

/**
  *factorial - calc factorial of an integer
  *
  *@n: factorial of n , n!
  *Return: n factorial
  */

int factorial(int n)
{
	if(n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else 
		return (n * factorial(n-1));
}
