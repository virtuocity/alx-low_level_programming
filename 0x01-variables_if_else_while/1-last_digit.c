#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/*if else stt to check value of random int n*/
	if (lastDigit > 5)
	{
		printf("The last digit of %d is %d\n and is greater than 0", n,lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("The last digit %d is %d  and is zero\n", n,lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
		printf("The last digit 0f %d is %d  and is less than 6 and not 0\n", n,lastDigit);
	return (0);
}
