#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: another nested for loop example
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/* 1 2 3 4
	 1 * * * *
	 2 *     *
	 3 *     *
	 4 * * * *
	 */
	int i, j;

	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			if (i == 1 || i == 4 || j == 1 || j == 4)
			printf("* ");

			else
				printf(" ");

		}
		printf("\n");
	}

	return (0);
}
