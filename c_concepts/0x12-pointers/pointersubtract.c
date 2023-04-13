#include <stdio.h>

void main()
{
	int a[] = {2, 4, 3, 0, -7};
	int *p = a;
	int *q = &a[3];

	printf("q - p is: %d\n", q - p);
	printf("p - q is: %d\n", p - q);
	printf("Value of q is: %d\n", *q);

	q = q - 2;
	printf("Value of q is: %d\n", *q);
}
