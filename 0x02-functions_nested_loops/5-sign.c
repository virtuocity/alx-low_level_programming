#include "main.h"

/**
 * print_sign - print the sign of a number
 * @c: letter to be checked
 *
 *Return: 1 and print + if c is number > 0
 *Return; 0 and print 0 if n is zero
 *-1 and prints - if n is less than 0
 *@arg1: int n , the number to be checked
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
			{
			_putchar('+');
			return (1);
			}
	 else if (n == 0 )
	 {
		 _putchar('0');
		 return (0);
	 }
	 else if (n < 0)
	 {
		 _putchar('-');
		 return (-1);
	 }
		 return (0);

}
