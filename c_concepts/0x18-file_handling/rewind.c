#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	char str[30];
	char ch;
	
	fp = fopen("abc.txt", "r+");

	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	
	fseek(fp, 3, SEEK_SET);

	while(!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}

	rewind(fp);

	while(!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fclose(fp);
}
