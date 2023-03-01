#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Learning to swap two numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 5;
	int b = 6;
	int temp;

	printf("a is %d, b is %d\n", a, b);

	temp = a;
	a = b;
	b = temp;

	printf("a is %d, b is %d\n", a, b);

	return (0);
}
