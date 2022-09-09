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
	char lowera;
	char uppera;

	lowera = 'a';
	/* While loop to print upper case alphabet*/
	while (lowera <= 'z')
	{
		putchar(lowera);
		lowera++;
	}
	putchar('\n');
	uppera = 'A';
	/*While loop to print upper case*/
	while (uppera <= 'Z')
	{
		putchar(uppera);
		uppera++;
	}
	return (0);
}
