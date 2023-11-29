#include "main.h"
/**
* print_binary - print binary represeantation of a
* base 10 number
*
* @n: base 10 number
* Return: void
*/
void print_binary(unsigned long int n)
{
	int  i, flag, bin;

	flag = 0;
	if (n == 0)
		_putchar('0');
	for (i = 63; i >= 0; i--)
	{
		bin = (n >> i);
		if (bin != 0)
			flag = 1;
		if (flag != 0)
		{
			if (bin & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
