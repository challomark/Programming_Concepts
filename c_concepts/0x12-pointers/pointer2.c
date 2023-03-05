#include <stdio.h>

int main()
{
	int x; /* normal variable of type int */
	int *ptr; /* declaring a pointer --> an address of a variable */
	x = 5;
	ptr = &x; /* prints address of x */


	printf("x is: %d\n", x); /* print the value of x which is 5 */
	printf("memory addess of x is: %p\n", ptr); /* address where x is located */

	/* how to get the variable memory address */
	printf("%d\n", *ptr); /* value at the address ptr(&x) */
	return (0);
}
