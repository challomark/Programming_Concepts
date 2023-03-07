#include <stdio.h>

/* global variable */
int g = 20;

int main(void)
{
	/* local variable */
	int a = 5;
	int b = 10;
	g = 50;

	printf("Variables a = %d, b = %d and g = %d\n", a, b, g);
	return(0);
}
