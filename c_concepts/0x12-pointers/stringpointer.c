#include <stdio.h>

void main()
{
	char str[] = "Welcome to Mark's World";
	char *ptr = str;

	printf("%c", *ptr);
	printf("%c\n", *(ptr++ + 1));
	printf("%c\n", ((ptr-- + 5) -1) + 3);
	printf("%c\n", *(++ptr + 10) - 20);
	printf("%c %c %c", *ptr, *++ptr, *--ptr);
}
