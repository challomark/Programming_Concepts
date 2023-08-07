#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *ptr;

	ptr = (int*)malloc(3 * sizeof(int));

	printf("\nEnter the values: ");

	for(i = 0; i < 3; i++)
	{
		scanf("%d", (ptr + i));
	}

	printf("\nThe entered values are: ");

	for(i = 0; i < 3; i++)
	{
		printf("%d\t", *(ptr + i));
	}

	free(ptr);

	return 0;
}
