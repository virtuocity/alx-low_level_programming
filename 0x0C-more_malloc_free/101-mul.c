#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - command line arguments
  *
  *@ac: arg count
  *@av: arg vector array
  * Return: always 0
  */
int main(int ac, char **av)
{
	int i, j;
	long int mul = 0;

	if (ac != 3)
	{
		printf("Error\n");
		printf("Usage: mul num1 num2\n");
		exit(98);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (!(isdigit(av[i][j])))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul =(long int)atoi(av[1]) * (long int)atoi(av[2]);
	printf("%ld\n", mul);
	return (0);
}
