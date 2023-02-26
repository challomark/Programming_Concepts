#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: ------------
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int i = 0; i <= 10; i++)
	{
		if (i == 6) {
			continue;
		}
		printf("Number %d\n", i);

	}
	return (0);
}
