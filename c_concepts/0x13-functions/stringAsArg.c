#include <stdio.h>

void modify(char[], char[]);

void main()
{
	char str1[] = "Mark";
	char str2[] = "Challo";
	modify(str1, str2);
}

void modify(char str1[], char str2[])
{
	int i, length = 0;
	for(i = 0; str1[i] != '\0'; i++)
	{
		length = length + 1;
	}

	str2[1] = 'z';
	printf("The length of string 1 is: %d\n", length);
	printf("Both strings are: %s %s\n", str1, str2);
}
