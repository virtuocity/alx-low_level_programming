#include "main.h"

/**
 *  * print_alphabet_x10 - writes the alphabet x10
 * @void: print alpahbet 10x
 *
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
