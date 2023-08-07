#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *ptr;

	printf("Enter total number of values: ");
	scanf("%d", &n);

	ptr = (int*)malloc(n*sizeof(int));

	printf("Enter values: ");

	for(i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}

	printf("The entered values are: ");

	for(i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr +i));
	}

	free(ptr);
}
