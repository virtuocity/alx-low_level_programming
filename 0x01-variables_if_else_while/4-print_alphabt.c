#include <stdio.h>

/**
* main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	/* For loop to print alphabet*/
	for (c = 'a' ; c <= 'z'; c++)
	{
		if(c != 'e' && c!= 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
