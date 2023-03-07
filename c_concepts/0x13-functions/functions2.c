#include <stdio.h>

void numberAdd(int num1, int num2)
{
	int calculateAdd = num1 + num2;
	printf("The addition of %d and %d is %d\n", num1, num2, calculateAdd);
}

int main(void)
{
	numberAdd(2, 5);
	return (0);
}
