#include "main.h"

/**
 *print_alphabet-print a-z
 *@void: no parameters
 *
 * Return: on success 1
 * No parameters
 */
void print_alphabet_10(void)
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
