#include "main.h"

/**
 *print_alphabet-print a-z
 *@void: no parameters
 *
 * Return: on success 1
 * No parameters
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
