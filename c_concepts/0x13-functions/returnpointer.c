#include <stdio.h>

int* returnpointer(int[]);

void main()
{
	int a[] = {1, 2, 3, 4, 5}, *p;
	p = returnpointer(a);
	printf("%d\n", *p);
}

int* returnpointer(int a[])
{
	a = a + 2;
	return a;
}
