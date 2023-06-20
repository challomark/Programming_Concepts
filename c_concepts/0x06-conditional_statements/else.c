#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using if else statement
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	int i, j;

	printf("Enter two digits to compare\n");
	scanf("%d %d", &i, &j);

	if (i < j)
	{
		printf("%d is greater than %d\n", j, i);
	}
	else
	{
	printf("%d is greater than %d\n", i, j);
	}
	return (0);
}
