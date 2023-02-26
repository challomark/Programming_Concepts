#include <stdio.h>

/**
 * main - later
 *
 * Description: ------
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int age;
	printf("What is your age");
	scanf("%d", &age);

	if (age > 18){
		printf("You are good to go and bet\n");
	} else if(age > 0 && age < 18){
		printf("Sorry you cannot bet\n");
	} else if(age < 0){
		printf("Sorry you are not born yet\n");
	} else{
		printf("Sorry we know nothing about you\n");
	}
	return 0;
}
