#include <stdio.h>

void add(int a, int b)
{
	printf("Addition is %d\n", a + b);
}

void sub(int a, int b)
{
	printf("Subtraction is %d\n", a - b);
}

void mult(int a, int b)
{
	printf("Multiplication is %d\n", a * b);
}

void div(int a, int b)
{
	printf("Division is %d\n", a / b);
}

int main()
{
	int ch, a, b;

	printf("0 for add\n1 for sub\n2 for multiply\n3 for division\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	switch(ch)
	{
		case 1: add(a, b);
			break;
		case 2: sub(a, b);
			break;
		case 3: mult(a ,b);
			break;
		case 4: div(a, b);
			break;
		default: printf("Enter a valid choice\n");
	}
}
