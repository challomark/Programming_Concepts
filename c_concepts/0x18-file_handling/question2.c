#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fptr1 = NULL, *fptr2 = NULL;
	char ch;
	int n = 1;

	fptr1 = fopen("abc.txt", "r");
	if(fptr1 == NULL)
	{
		printf("No file");
		exit(1);
	}

	fptr2 = fopen("destination.txt", "w");
	if(fptr2 == NULL)
	{
		printf("No file");
		exit(1);
	}

	while((ch = fgetc(fptr1))!= EOF)
	{
		fputc(ch, fptr2);
	}

	fclose(fptr1);
	fclose(fptr2);

	printf("Successfully copied");
}
