#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using 2D array
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	int d[3][4] =
	{
		{1,2,3,4},
		{3,5,7,9},
		{8,5,2,1},

	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	return (0);
}	
