#include <stdio.h>

int main()
{
	int a = 5, b, c, d;

	b = ++a;
	c = a++;
	d = ++a;

	printf("a is %d\n", a);
	printf("b is %d\n", b);
	printf("c is %d\n", c);
	printf("d is %d\n", d);

	return (0);
}
