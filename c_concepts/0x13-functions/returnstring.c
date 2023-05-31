#include <stdio.h>

char* display();

void main()
{
	char *str;
	str = display();
	str[0] = 'z';
	printf("String is: %s\n", str);
}

char* display()
{
	static char str[] = "Mark";
	return str;
}
