#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is an example using variables
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	x = 25;

	int y = 30;
	float z = 35.65;
	char a = 'R';
	char name[] = "Mark Challo";

	printf("size of int : %ld", sizeof(int));
	printf("size of float : %ld", sizeof(float));

	printf("My name is %s and I have KSH %f\n", name, z);

	printf("Hello Mark\n"); /* Inline comment */
	printf("Hello to you too\n");
	return (0);

}
