#include "main.h"
/**
 * swap_int - swap two numbers by passing values by reference
 *
 *@a: Pointer to first variable
 *@b: pointer to second variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

