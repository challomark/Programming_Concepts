#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Practicing pre and post increment
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 1;
	int j;

	j = i++;

	printf("%d %d\n", i, j);
	return (0);
}
