# Conditional Statements in C
* In C programming, conditional statements are used to control the flow of the program based on certain conditions. The if, else, else if, and combinations of these statements allow you to specify different actions to be executed based on different conditions. 

* Here's how these statements work:

## if statement
* The if statement is used to execute a block of code if a condition is true. It has the following syntax:
~~~~
if (condition) {
    // Code to be executed if the condition is true
}
~~~~

* Example:
~~~~
int num = 5;
if (num > 0) {
    printf("The number is positive.\n");
}
~~~~

## if-else statement
* The if-else statement allows you to specify two different blocks of code. The first block is executed if the condition is true, and the second block is executed if the condition is false. It has the following syntax:
~~~~
if (condition) {
    // Code to be executed if the condition is true
} else {
    // Code to be executed if the condition is false
}
~~~~

* Example:
~~~~
int num = 5;
if (num > 0) {
    printf("The number is positive.\n");
} else {
    printf("The number is non-positive.\n");
}
~~~~

## else if statement
* The else if statement allows you to specify multiple conditions to be checked sequentially. If the first condition is false, it moves to the next else if condition. If all conditions are false, the else block is executed. It has the following syntax:
~~~~
if (condition1) {
    // Code to be executed if condition1 is true
} else if (condition2) {
    // Code to be executed if condition1 is false and condition2 is true
} else {
    // Code to be executed if all conditions are false
}
~~~~

* Example:
~~~~
int num = 5;
if (num > 0) {
    printf("The number is positive.\n");
} else if (num < 0) {
    printf("The number is negative.\n");
} else {
    printf("The number is zero.\n");
}
~~~~

## Combination of if, else if, else
* You can combine multiple if, else if, and else statements to handle more complex conditions and decision-making. The conditions are evaluated sequentially, and only one block of code is executed based on the first condition that evaluates to true.

* Example:
~~~~
int num = 5;
if (num > 0) {
    printf("The number is positive.\n");
} else if (num < 0) {
    printf("The number is negative.\n");
} else if (num == 0) {
    printf("The number is zero.\n");
} else {
    printf("Invalid number.\n");
}
~~~~

### In C programming, these conditional statements allow you to control the execution of code based on different conditions, making your program more flexible and responsive.

* An example of a program:
~~~~
#include <stdio.h> 

int main()     /* Most important part of the program! */
{
	int age;   /* Need a variable... */
	
	printf("Please enter your age: "); /* Asks for age */
	scanf("%d", &age); 		/* The input is put in age */
	if (age < 100) 			/* If the age is less than 100 */
	{
		printf("You are pretty young!\n");
	}
	else if (age == 100)
	{
		printf("You are old\n");
	}
	else
	{
		printf("You are really old\n");  /* Executed if no other statement is */
	}
      return (0);
}
~~~~
