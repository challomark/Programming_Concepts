#include <stdio.h>
#include <string.h>

void main()
{
	int l, i;
	char s1[30], c;
	printf("Enter a string: ");
	scanf("%s", s1);
	l = strlen(s1);
	for (i = 0; i < l / 2; i++)
	{
		c = s1[i];
		s1[i] = s1[l - 1 - i];
		s1[l - 1 - i] = c;
	}

	printf("The reverse of the string is: %s\n", s1);
}
