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

	alphabet = 'a';
	/* While loop to print alphabet*/
	while (alphabet <= 'z')
	{
		if( alphabet == 'e')
			continue;
		else if (alphabet == 'q')
			continue;
		else
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
