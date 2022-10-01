#include "main.h"

/**
  *is_prime_check - check if number is prime
  *
  *@n:operand 1
  *@i: operand 2
  *Return: 1 if prime 0 otherwise
  */
int is_prime_check(int n, int i)
{
	int count = 0;

	if (i <= n)
	{
		if (n % i == 0)
			count++;
		return (count + is_prime_check(n, i + 1));
	}
	return (count);
}

/**
  *is_prime_number- calls is_prime_check
  *
  *@n: input number to check
  *Return: 0 or 1
  */
int is_prime_number(int n)
{
	if (is_prime_check(n, 1) == 2)
		return (1);
	else
		return (0);
}
