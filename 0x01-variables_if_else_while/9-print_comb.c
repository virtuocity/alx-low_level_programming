#include <stdio.h>

/**
* main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	 int i;
	/*For loop to print numbers*/
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
