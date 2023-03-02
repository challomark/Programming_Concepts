#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Learning to use arrays
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int z[4];
	int i;

	z[0] = 1;
	z[1] = 2;
	z[2] = 3;
	z[3] = 4;

	for (i = 0; i <= 3; i++)
	{
		printf("%d\n", z[i]);
	}
	return (0);
}
