#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	char ch;
	char str[10];
	fp = fopen("abc.txt", "r");
	if(fp == NULL)
	{
		printf("Error\n");
		exit(1);
	}
	fgets(str, 5, fp);
	printf("%s", str);

	/*while(!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}*/

	fclose(fp);
}
