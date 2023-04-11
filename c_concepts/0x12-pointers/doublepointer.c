#include <stdio.h>

void main()
{
	int a = 10;
	unsigned int *p = &a;
	unsigned int **q = &p;
	unsigned int ***r = &q;
	*p = 12;
	**q = 17;

	printf("a is %d %d %d %d\n", a, *p, **q, ***r);
	printf("address of q is: %p\n", &q);
	printf("address of p is: %p\n", &p);
}
