#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using nested for loops
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (j = 1; i <= 4; j++)
	{
		for (i = 1; i <= 4; i++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return (0);
}
