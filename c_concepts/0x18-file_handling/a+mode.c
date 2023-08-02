#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	char ch;

	fp = fopen("abc.txt", "a+");
	if(fp == NULL)
	{
		printf("File doesn't exist");
		exit(1);
	}

	while(!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputs("This is great!", fp);

	fclose(fp);
}
