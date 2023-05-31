#include <stdio.h>

const char* display();

void main()
{
	const char *str;
	str = display();

	printf("String is: %s\n", str);
}

const char* display()
{
	const char* str = "Mark";
	return str;
}
