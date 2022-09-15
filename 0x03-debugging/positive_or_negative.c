#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - print whether number is =ve,-ve or a zero
 *
 * @i: number to be checked
 * Return: vooid just print response
 */
void positive_or_negative(int i)
{
	/*check value of i*/
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
		printf("%d is negative\n", i);
}
