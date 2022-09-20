#include "main.h"
/**
 * _atoi - convert a string to an integer
 *
 *@s: string to be converted
 *Return: coverted integer
 */
/**
 *_atoi - Entry point
 *@s: pointer to the string
 *Return: no return
 */
int _atoi(char *s)
{
	int i, j;
	int negative;
	unsigned int init;
	int tmp;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	j = 0;
	tmp = 10;
	init = 0;
	negative = 0;
	while (j < i)
	{
		if (s[j] == '-')
			negative = negative + 1;
		if (s[j] >= '0' && s[j] <= '9')
		{
			if (s[j + 1] >= '0' && s[j + 1] <= '9')
			{
				init = (s[j] - '0') + init;
				init = tmp * init;
			}
			else
			{
				init = (s[j] - '0') + init;
			}
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
		}
		j++;
	}
	if (negative % 2 != 0)
		return ((init) * -1);
		else
			return (init);
}
