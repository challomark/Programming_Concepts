#include <stdio.h>
#include <string.h>

void main()
{
	int value;
	char s1[30], s2[30];
	printf("Enter string 1: ");
	scanf("%s", s1);
	printf("Enter string 2: ");
	scanf("%s", s2);
	value = strcmp(s1, s2);
	if (value == 0)
		printf("They are the same\n");
	else
		printf("They are not the same\n");
}
