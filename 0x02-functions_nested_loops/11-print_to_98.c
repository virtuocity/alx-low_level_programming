#include "main.h"
#include <stdio.h>

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
			printf("%d", n);	
			if (n != 98)
			{
				printf(",");
			}
			n++;			
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}

