#include <stdio.h>
#include "main.h"

/*main- program entry point
 *
 *@void: no input
 * Return: 0 on success, 1 otherwise on failure
 */
int main(void)
{
	printFibonacci(50);
	return (0);
}

/*printFibonacci-recursively print first 50 fibonacci numbers
 *
 *@n: number of fibonacci digits
 *Return: fibonacci numbes
 */
void printFibonacci(int n)
{
	long fib1, fib2, next;
	int i;

	fib1 = 1;
	fib2 = 2;

	if (n < 1)
		return;
	printf("%li, ", fib1);
	for (i = 2; i <=n ; i++)
	{
		if (i == n)
		{
			printf("%li", fib2);
		}
		else
			printf("%li, ", fib2);
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
}


