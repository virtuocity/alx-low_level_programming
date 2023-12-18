#include "main.h"
/**
  *get_endianness - check if a number is big or little
  * endian
  *
  *Return: 1 if true 0 if false
  */
int get_endianness(void)
{
	int bit;

	bit = 1;

	if ((bit >> 31) & 1)
		return (0);
	else
		return (1);
}
