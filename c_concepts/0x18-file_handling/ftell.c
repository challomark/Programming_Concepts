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

	printf("%ld\n", ftell(fp));

	//ch = fgetc(fp);
	
	fscanf(fp, "%s", str);
	printf("%s", str);

	fseek(fp, 0, SEEK_END);
	printf("%ld\n", ftell(fp));

	fclose(fp);
}
