#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Swapping without using temporary variables
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b;

	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);

	a = a - b;
	b = a + b;
	a = b - a;

	printf("After swapping, a is %d\n", a);
	printf("After swapping, b is %d\n", b);

	return (0);
}
