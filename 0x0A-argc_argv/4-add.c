#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
  * main- write the programmes name to stdout
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 always
  */
int main(int argc, char *argv[])
{
	int i, j;
	long int sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%ld\n", sum);
	return (0);
}

