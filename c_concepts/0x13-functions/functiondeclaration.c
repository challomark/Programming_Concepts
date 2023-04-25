#include <stdio.h>

void sum(); /* function declaration */
void main()
{
	sum(); /* function calling */
}

void sum() /* function definition */
{
	int a, b, sum = 0;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	sum = a + b;

	printf("Sum is: %d\n", sum);
}
