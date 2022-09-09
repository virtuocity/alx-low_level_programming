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
	for (i = 0; i < 16; i++)
	{
		printf("%x", i);
	}
	printf("\n");
	return (0);
}
