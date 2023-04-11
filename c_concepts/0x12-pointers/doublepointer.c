#include <stdio.h>

void main()
{
	int a = 10;
	int *p = &a;
	int **q = &p;
	int ***r = &q;

	printf("a is %d %d %d %d\n", a, *p, **q, ***r);
}
