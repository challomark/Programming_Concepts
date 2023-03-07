#include <stdio.h>

void numberSquare(int number)
{
	int calculateSquare = number * number;
	printf("The square of %d is %d\n", number, calculateSquare);
}

int main(void)
{
	numberSquare(9);
	
	return (0);
}
