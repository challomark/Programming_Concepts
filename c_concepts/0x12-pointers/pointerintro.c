#include <stdio.h>

void main()
{
	int a = 10, b = 9;
	int *p, *q;
	p = &a;
	q = &b;

	printf("Value of a is: %d\n", a);
	printf("Value of a is: %d\n", *p);
}
