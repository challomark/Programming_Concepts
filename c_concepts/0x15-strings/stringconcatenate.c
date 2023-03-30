#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "Mark";
	char s2[7] = "Challo";

	strcat(s1, s2);
	printf("%s\n", s1);
}
