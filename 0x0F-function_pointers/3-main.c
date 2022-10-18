#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  *main- entry point
  *
  *@argc: argument count
  *@argv: argument vector
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int x, y;
	int answer;

	if (argc != 4)
	{
		printf("Usage: calc num1 operator num2\n");
		return (1);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
		&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Wrong operands used\n");
		return (1);
	}
	if (argv[2][1] == '\0')
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		answer = (*get_op_func(argv[2]))(x, y);
		printf("%d\n", answer);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
