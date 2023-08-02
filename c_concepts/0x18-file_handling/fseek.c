#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	char ch;
	char str[50];

	fp = fopen("abc.txt", "r");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}

	fseek(fp, 6, SEEK_SET);
	ch = fgetc(fp);

	printf("%c", ch);

	fclose(fp);
}
