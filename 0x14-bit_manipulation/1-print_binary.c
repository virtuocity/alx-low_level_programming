#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: decimal number
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	int i, binary, flag, size;

	flag = 0;
	size = sizeof(int) * 8;
	if (n == 0)
		_putchar('0');
	for  (i = size - 1; i >= 0; i--)
	{
		binary = (n >> i);
		if (binary != 0)
			flag = 1;
		if (flag != 0)
		{
			if (binary & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}