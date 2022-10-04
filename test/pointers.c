#include <stdio.h>
int main()
{
    char *s= "geeksquiz";
    printf("%lu", sizeof(s));
    printf("\n%s", s);
    printf("\n%c", *(s + 7));
    return 0;
}
