#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ch = 1;
	int *ptr;
	while(ch < 50)
	{
		printf("Memory leak demo\n");
		ptr = (int*)malloc(40*sizeof(int));

		printf("Continue?? Press 1 to continue");
		scanf("%d", &ch);
	}

	free(ptr);
}
