#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using if else if statement
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 6, b = 3, c = 4;

	if (a > b && a > c)
	{
		printf("%d\n", a);
	}
	else if (b > c)
	{
		printf("%d\n", b);
	}
	else
		printf("%d\n", c);


	return (0);
}
