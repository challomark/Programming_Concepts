#include <stdio.h>

int main()
{
	char name[30];
	printf("Enter name: ");

	scanf("%s", name);
	printf("Example A: %.5s\n", name);
	printf("Example B: %10.5s\n", name);
}
