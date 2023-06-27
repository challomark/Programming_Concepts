#include <stdio.h>
#pragma pack(1)

struct abc
{
	char a; 
	int b;
	char c;
};

void main()
{
	struct abc s;
	printf("%ld\n", sizeof(s));
}
