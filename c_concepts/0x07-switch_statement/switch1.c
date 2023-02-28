#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using switch statements
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char grade = 'B';

	switch (grade)
	{
		case 'A':
			printf("Excellent!\n");
			break;
		case 'B':
			printf("Well Done\n");
			break;
		case 'C':
			printf("You passed\n");
			break;
		case 'D':
			printf("Better Try Again\n");
			break;
		case 'F':
			printf("Fail\n");
			break;
		default:
			printf("Not A Valid Grade\n");
	}
	printf("Your grade is %c\n", grade);

	return (0);
}
