#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	char str[50];
	fp = fopen("abc.txt", "w+");

	if (fp == NULL)
	{
		printf("Error");
		exit(1);
	}

	fputs("Challo", fp);
	
	fclose(fp);
}
