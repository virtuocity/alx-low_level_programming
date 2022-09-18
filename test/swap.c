#include <stdio.h>
/*Swap function prototype*/
void swap(int *v1, int *v2);

/**
 * main - program entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;
	int j = 2;

	printf("i = %d, j = %d\n", i, j);
	swap(&i, &j);
	printf("i = %d, j =%d\n", i, j);
}
/**
 * swap - swap two numbers by passing values by reference
 *
 *@v1: Pointer to first variable
 *@v2: pointer to second variable
 * Return: void
 */
void swap(int *v1, int *v2)
{
	int tmp;

	tmp = *v1;
	*v1 = *v2;
	*v2 = tmp;
}
