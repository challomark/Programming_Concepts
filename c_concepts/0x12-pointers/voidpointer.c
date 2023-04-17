#include <stdio.h>

void main()
{
	void *vp;

	int a = 5;
	float b = 1.56;
	char ch = 'c';

	vp = &a;

	printf("a = %d\n", *(int *)vp);
}
