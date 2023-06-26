#include <stdio.h>

union abc
{
	int a;
	char b;
	float c;
};

void main()
{
	union abc u;
	union abc *ptr = &u;
	u.a = 1;
	u.b = 97;
	u.c = 78.65;

	printf("a is %d\n", ptr->a);
	printf("b is %c\n", ptr->b);
	printf("c is %f\n", ptr->c);
}
