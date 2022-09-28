#include "main.h"
/**
  *_strlen_recursion - find length of string using recursion
  *
  *@s:string to get length
  *Return: n string length
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	
	return (0);
}
