#include "main.h"
/**
 *puts_half - prints second half of a string
 *
 *@str: pointer to the string
 *Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	i++;
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
	} else
	{
		j = i / 2;
	}

	while (j < i - 1)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar ('\n');
}
