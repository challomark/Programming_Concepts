#include <stdio.h>

void sum(int a, int b)
{
	printf("Sum = %d\n", a + b);
}

void sub(int a, int b)
{
	printf("Subtraction = %d\n", a - b);
}

void display(void (*fptr)(int, int))
{
	fptr(5, 1);
}

void main()
{
	display(sum);
	display(sub);
}
