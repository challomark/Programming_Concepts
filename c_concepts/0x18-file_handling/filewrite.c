#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	FILE *fp = NULL;
	char str[50];
	int a = 10;
	char ch = 's';
	int i;

	fp = fopen("abc.txt", "w");

	if (fp == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	printf("Enter the string:");
	gets(str);

	fprintf(fp, "%d %s %c", a, str, ch);

	//fputs(str, fp);

	//for(i = 0; i != strlen(str); i++)
	//	fputc(str[i], fp);

	fclose(fp);
}
