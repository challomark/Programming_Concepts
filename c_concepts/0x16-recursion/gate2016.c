#include <stdio.h>

void count(int n)
{
	static int d = 1;

	printf("%d\n", n);
	printf("%d\n", d);
	d++;

	if(n > 1)
		count(n - 1);
	printf("%d\n", d);
}

void main()
{
	count(3);
}
