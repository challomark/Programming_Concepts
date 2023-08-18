#include <stdio.h>

void fun1();
void fun2();
void main()
{
	extern int x;

	printf("x = %d\n", x);
	fun1();
	fun2();
}

void fun1()
{
	int x = 1;
	x += 5;
	printf("x = %d\n", x);
}

void fun2()
{
	int y = 4;
	y++;
	printf("In fun2, y = %d\n", y);
}

int x = 10;
