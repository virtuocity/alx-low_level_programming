#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n:input number
 *
 *Return: the last number
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (n < 0)
	{
		lastDigit = (-1 * lastDigit);
	}
	else
	_putchar(lastDigit + '0');

	return (lastDigit);
}
