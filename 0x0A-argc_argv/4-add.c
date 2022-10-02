#include <stdio.h>
#include <stdlib.h>

/**
  * main- write the programmes name to stdout
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 always
  */
int main(int argc, char *argv[])
{
	int i, j, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	product = i * j;
	printf("%d\n", product);
	return (0);
}

