#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *ptr = (int*)malloc(sizeof(int));
	*ptr = 67;

	printf("%d\n", *ptr);
}
