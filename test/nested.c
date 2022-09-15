#include <stdio.h>

/**
 * * main - Entry point
 * *
 * * Return: Always 0 (Success)
 * */
int main(void)
{

	char c;
	int i = 0;
	/*while loop to print 10 new lines*/
	while (i < 10)
	{
		c = 'a';
		/*While loop to print alpahbet*/
		while (c <= 'z')
		{																putchar(c);											                        c++;
																	}
		putchar('\n');
		i++;
	}
	return (0);
}
