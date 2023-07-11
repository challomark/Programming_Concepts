#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	//char str[30];
	fp = fopen("abc.txt", "r+");
	
	if(fp == NULL)
	{
		printf("Error\n");
		exit(1);
	}
	fputs("Mark", fp);
	fputc('z', fp);
	fclose(fp);
}
