#include <stdio.h>
#define MAX(a, b) if(a > b) \
	printf("%d is maximum\n", a); \
	else \
	printf("%d is maximum\n", b); \

int main()
{
	MAX(3, 4);
	
#undef MAX /*using undefine*/

	MAX(5, 4);

	return 0;
}
