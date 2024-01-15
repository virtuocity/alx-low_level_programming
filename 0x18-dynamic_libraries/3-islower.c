#include "main.h"

/**
 * _islower - checks if letter is lower or upper
 * @c: letter to be checked
 *
 *Return: 1 if c is lowercase 0 otherwise
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
