#include "main.h"

/**
 * _isalpha - checks if character is alphabetic
 * @c: letter to be checked
 *
 *Return: 1 if c is alphabetic 0 otherwise
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
