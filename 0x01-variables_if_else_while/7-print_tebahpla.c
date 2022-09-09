#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet;

	alphabet = 'z';
	/* While loop to print alphabet*/
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
