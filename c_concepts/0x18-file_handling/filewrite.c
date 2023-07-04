#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	char ch = 'a';

	fopen("abc.txt", "w");

	if (fp == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	fputc(ch, fp);

	fclose(fp);
}
