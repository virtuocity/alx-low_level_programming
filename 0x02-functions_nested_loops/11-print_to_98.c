#include "main.h"

/*print_to_98 - Print numbers from the input to 98
 *
 * @n: start number
 * Return:Void ,just print numbers
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
			}
			n++;			
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
			}
			n--;
		}
	}
	else
		_putchar(98);
}

