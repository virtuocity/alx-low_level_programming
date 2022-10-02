#include <stdio.h>

/**
  * main- write the programmes name to stdout
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 always
  */
int main(int argc, char *argv[])
{
	if (*argv == NULL)
		return (1);
	printf("%d\n", argc - 1);
	return (0);
}

