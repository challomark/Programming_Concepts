#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *ptr;

	printf("Enter total number of values: ");
	scanf("%d", &n);

	ptr = (int*)malloc(n*sizeof(int));
	
	printf("\nEnter the values: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}

	printf("\nEnter the updated size of n: ");
	scanf("%d", &n);

	int *ptr1 = (int*)realloc(ptr, n * sizeof(int));

	printf("\nPrevious address: %ls, New address: %ls", ptr, ptr1);

	for(i = 0; i < n; i++)
	{
		printf("%d\t", *(ptr1 + i));
	}

	free(ptr1);
}
