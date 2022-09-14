#include "main.h"

/**
 * jack_bauer - print the print every minute of the day
 * @void:no input
 *
 *Return: the 24 hr clock printed line by line
 * hr is hour and min is minute
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min <60;min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}

	}
}
