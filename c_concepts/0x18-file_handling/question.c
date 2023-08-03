#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	char c;
	int n = 1;

	fp = fopen("abc.txt", "r");

	if (fp == NULL)
	{
		printf("Error");
		exit(1);
	}

	while((c = fgetc(fp))!= EOF)
	{
		if(c == '\n')
		{
			n = n + 1;
		}
	}

	fclose(fp);

	printf("Lines are: %d\n", n);
}
