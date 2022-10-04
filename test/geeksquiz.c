#include <stdio.h>

/**
  *main - program entry
  *
  *Return: 0 on sucess
  */
int main(void)
{
	char *s = "geeksquiz";
	char c[] = "geeksquiz";

	printf("size of string literal is:%lu\n", sizeof(s));
	printf("size of array is:%lu\n", sizeof(c));
	return (0);
}

