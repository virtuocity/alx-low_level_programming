#include "main.h"

/**
 *print_alphabetx10 - print a-z
 *@void: no parameters
 *
 * A function that prints alphabet x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;
	/*while loop to print 10 new lines*/
	while (i < 10)
	{
		c = 'a';
		/*While loop to print alpahbet*/
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	i++;
	}
}
