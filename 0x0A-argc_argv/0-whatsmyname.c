#include <stdio.h>

/**
  * main- write the programmes name to stdout
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 always
  */
int main(int argc, char *argv[])
{
	if (argc == 0)
		return (1);
	printf("%s\n", argv[0]);
	return (0);
}

