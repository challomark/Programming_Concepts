#include <stdio.h>

void main()
{
	int a[5] = {1, 4, 2 , -8, 0};
	int *p = &a[0];

	printf("Value is: %d\n", *p);
}
