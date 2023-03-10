#include <stdio.h>
#include <stdlib.h>

/**
  * main - command line arguments
  *
  *@ac: arg count
  *@av: arg vector array
  * Return: always 0
  */
int main(int ac, char **av)
{
	long num1 = 0;
	long num2 = 0;
	long mul = 0;

	if (ac != 3)
	{
		printf("Error\n");
		printf("Usage: mul num1 num2\n");
		exit(98);
	}
	num1 = (long)atoi(av[1]);
	num2 = (long)atoi(av[2]);
	mul = num1 * num2;
	printf("%ld\n", mul);
	return (0);
}
