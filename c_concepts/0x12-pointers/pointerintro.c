#include <stdio.h>

void main()
{
	int a = 10, b = 9, c;
	int *p, *q;
	p = &a, &b;
	/*q = &b */
	c = *p;

	printf("Value of a is: %d\n", a);
	printf("Value of a is: %d\n", *p);
	printf("Address of a is: %p\n", &a);
	printf("Address of a is: %p\n", p);
	printf("Address of p is: %p\n", &p);
	printf("Value of c is: %d\n", c);
}
