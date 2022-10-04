#include <stdio.h>
void modif_my_char_var(char *cc, char ccc);
/**
 *modify_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of c:%c\n", c);
	printf("Address of 'p': %p\n", &p);
	printf("Value of 'p': %p\n", p);
	printf("Address of c %p\n", &c);
	
	modif_my_char_var(p, c);
	printf("Value of c after the call %c\n", c);
	return (0);
}

