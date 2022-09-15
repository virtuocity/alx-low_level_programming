#include "main.h"

/**
 * _isupper - Check if character is upper or lower case
 *@c: charater to check
 * Return:1 if is upper or else 0
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
