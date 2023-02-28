#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using switch statement
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 3;

	switch (i)
	{
		case 0:
			printf("One\n");
			break;
		case 1:
			printf("Two\n");
			break;
		case 2:
			printf("Three\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		default:
			printf("Not a valid number\n");
	}

	return (0);
}
