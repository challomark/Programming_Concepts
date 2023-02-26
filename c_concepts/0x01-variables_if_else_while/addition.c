#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Addition of two variables
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b, c;

	printf("Enter two values\n");
	scanf("%d %d", &a, &b);

	c = a + b;

	printf("The addition of %d and %d is %d\n", a, b, c);

	return (0);
}
