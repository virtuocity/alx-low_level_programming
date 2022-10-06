#include "main.h"
/**
 *create_array- create array from buffer
 *
 *@size: buffer size
 *@c: buffer
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *s = NULL;/*good coding art init to NULL*/
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc((size + 1) * sizeof(char));
	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			s[i] = c;
			i++;
		}
	}
	return (s);
}
