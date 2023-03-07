#include <stdio.h>

/* function declaration of function prototype */
int numberAdd(int num1,int num2);

int main(void)
{
	int result = numberAdd(9, 20);
	printf("The result is %d\n", result);

	return (0);
}

/* function definition of function prototype */
int numberAdd(int num1, int num2)
{
	int calculateAdd = num1 + num2;
	return calculateAdd;
}
