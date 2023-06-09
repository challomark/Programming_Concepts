#include <stdio.h>

int add(int a, int b)
{
	printf("Addition is %d\n", a + b);
}

int sub(int a, int b)
{
	printf("Subtraction is %d\n", a - b);
}

int mult(int a, int b)
{
	printf("Multiplication is %d\n", a * b);
}

int div(int a, int b)
{
	printf("Division is %d\n", a / b);
}

int main()
{
	int ch, a, b;
	int (*fptr[10])(int, int) = {add, sub, mult, div};

	printf("0 for add\n1 for sub\n2 for multiply\n3 for division\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	/* switch(ch)
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
	}*/
	(*fptr[ch])(a, b);
}
