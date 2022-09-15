#include <stdio.h>
#include "main.h"

/* printFibonacci-recursively print first 50 fibonacci numbers
 *
 * @n: number of fibonacci digits
 *Return: fibonacci numbes
 */
void printFibonacci(int n)
{
	int fib1,fib2,i;

	fib1 = 0;
	fib2 = 1;

	if (n < 1)
		return;
	printf("%d,", fib1);
	for (i = 1; i < n;i++)
	{
		printf("%d,", fib2);
		int next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
}


