#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Using ternary operators
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int age;

	/* take input from users */

	printf("Enter your age: ");
	scanf("%d", &age);

	/* ternary operator to find if a person can vote or not */

	(age >= 18) ? printf("You can vote\n") : printf("You cannot vote\n");

	return (0);
}
