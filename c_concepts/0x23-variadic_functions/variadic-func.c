#include <stdio.h>
#include <stdarg.h>

int sum_integers(int num, ...) 
{
	int i, sum;
	sum = 0;

	va_list args; /* Declare a va_list variable to hold the arguments */
	va_start(args, num); /* Initialize the va_list to point to the first argument after 'num' */

	for (i = 0; i < num; i++)
	{
		int arg = va_arg(args, int); /* Retrieve the next argument as an int */
		sum += arg;
	}

	va_end(args); /* Clean up the va_list when done */

	return sum;
}

int main()
{
	printf("Sum: %d\n", sum_integers(3, 10, 20, 30)); /* Outputs: Sum: 60 */
	return 0;
}
