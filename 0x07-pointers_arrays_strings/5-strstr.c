#include "main.h"

/**
 *_strstr- finds first occurence of substring needle in
 *the string haystack
 *
 *@haystack: search string
 *@needle: substring to search in haystack
 * Return: pointer to beginnning of located substr
 */
char *_strstr(char *haystack, char *needle)
{
	char *pn;
	char *ph;

	ph = needle;
	for (; *haystack != 0;  haystack++)
	{
		for (pn = needle, ph = haystack; *pn == *ph && *pn; pn++, ph++)
			;
		if (*pn == '\0')
			return (haystack);
	}
		return (NULL);
}
