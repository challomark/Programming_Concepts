#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: ----------
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char grade;

	printf("Please enter your grade to see remark\n");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("Excellent grade\n");
		break;
	case 'B':
		printf("Good grade\n");
		break;
	case 'C':
		printf("Average grade\n");
		break;
	case 'D':
		printf("Below average grade\n");
		break;
	case 'E':
		printf("Failed grade\n");
		break;
	default:
		printf("No remark\n");
	}
	return (0);
}
