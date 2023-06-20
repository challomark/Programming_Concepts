#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using elseif statement
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int age;

	printf("Please enter your age:\n");
	scanf("%d", &age);
	if (age < 100)
	{
		printf("You are pretty young\n");
	}
	else if (age == 100)
	{
		printf("You are old\n");
	}
	else
	{
		printf("You are really old\n");
	}

	return (0);
}
