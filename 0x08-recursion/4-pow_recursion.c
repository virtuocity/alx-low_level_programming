#include "main.h"

/**
  *_pow_recursion - x to power y same as pow()
  *
  *@x: operand 1
  *@y: operand 2
  *Return: x to power y
  */
int _pow_recursion(int x, int y)
{
	if (y > -1 && y <= 1 && y != 0)
		return (x);
	if (y <= -1)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
