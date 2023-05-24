#include <stdio.h>

int sum (int, int);

void main()
{
	int x, y, c;
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);
	c = sum(x, y);
	printf("Sum = %d\n", c);
}

int sum(int a, int b)
{
	return a + b;
}
