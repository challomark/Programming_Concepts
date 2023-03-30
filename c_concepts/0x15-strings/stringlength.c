#include <stdio.h>
#include <string.h>

int main() 
{
	char name[10];
	int count = 0, i = 0;
	printf("Enter name: ");
	scanf("%s", name);
	count = strlen(name);
	printf("%s\n", name);
	printf("Length of the string is: %d\n", count);
}
