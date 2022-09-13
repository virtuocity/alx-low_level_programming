#include "main.h"

/**
 * Print alphabet a-z
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';
	/*While loop to print alpahbet*/
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
