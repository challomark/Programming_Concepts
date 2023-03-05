#include <stdio.h>

int main()
{
	int x; /* normal variable of type int */
	int *ptr; /*declaring a pointer */
	x = 5;
	ptr = &x; /* prints address of x */


	printf("x is: %d\n", x); /* print the value of x */
	printf("memory addess of x is: %p\n", ptr); /* address where x is located */
	return (0);
}
