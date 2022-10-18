#include "3-calc.h"

/**
  *get_op_func - select correct function
  *
  *@s:operator passed as argv
  *@a: operand 1
  *@b: operand 2
  *Return: pointer to corresponding operator function
  */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			return ((ops[i].f));
 	}
	return (NULL);
}
