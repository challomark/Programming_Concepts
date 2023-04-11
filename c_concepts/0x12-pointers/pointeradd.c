#include <stdio.h>

void main()
{
	int a[5] = {1, 4, 2 , -8, 0};
	unsigned int *p = &a[0];

	printf("Value is: %d\n", *p);
	printf("Address of element is: %p\n", p);
	
	p = p + 2;

	printf("Value is: %d\n", *p);
	printf("Address of element is: %p\n", p);
}
