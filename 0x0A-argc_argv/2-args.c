#include <stdio.h>

/**
  * main- write the programmes name to stdout
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 always
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 0)
		return (1);
	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

