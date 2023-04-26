#include <stdio.h>

void main()
{
	char fun ();
	char ch;
	ch = fun();

	printf("ch = %c\n", ch);
}

char fun()
{
	char c;
	
	printf("Enter a character: ");
	scanf("%c", &c);

	return c;
}
