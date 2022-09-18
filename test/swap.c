#include <stdio.h>

void swap(int *v1,int *v2);

int main(void)
{ 
	int i = 1;
	int j = 2;

	printf("i = %d, j = %d\n", i, j);
	swap(&i,&j);
	printf("i = %d, j =%d\n", i, j);
}

void swap(int *v1,int *v2)
{
	int tmp;
	tmp = *v1;
	*v1 = *v2;
	*v2 = tmp;
}
