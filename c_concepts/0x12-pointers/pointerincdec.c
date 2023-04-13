#include <stdio.h>

void main()
{
	int a[] = {3, 2, 67, 0, 56};
	int *p;
	p = a;
	
	printf("%d\n", *p++);
	printf("%d\n", *p);

}
