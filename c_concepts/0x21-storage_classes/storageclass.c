#include <stdio.h>

void fun1();

int a = 50;
int b = 56;

int main()
{
	//int a = 1;
	fun1();
	{
		int a = 10;
		printf("Inside block1 %d\n", a);
	}
	{
		printf("Inside block2%d\n", a++);
	}

	printf("Inside main %d\n", a);
	printf("Inside main %d\n", b);

	return 0;
}

void fun1()
{
	int a = 23;
	int b = 89;
	printf("Inside fun1 %d\n", a);
}
