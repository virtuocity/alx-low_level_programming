#include <stdlib.h>
#include <stdio.h>
void print_int_array(int *a,int size);

void print_int_array(int *a,int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
int main(int ac, char **av)
{
	int *a;
	int asize;
	int i;
	
	if (ac < 2)
	{
		printf("Please give me at least one number\n");
		printf("usage: %s number[NUMBER]\n", av[0]);
	}
	/* array size is argument count - 1*/
	asize = ac - 1;
	a = malloc(asize * sizeof(int));
	i = 0;
	while (i < asize)
	{
		a[i] = atoi(av[i + 1]);
		i++;
	}
	print_int_array(a, asize);
	free(a);
	return (0);
}
