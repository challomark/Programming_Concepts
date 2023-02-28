# If Statements in C
## Basic If Syntax

* The structure of an if statement is as follows:
~~~~	
if ( statement is TRUE )
	Execute this line of code

if ( 5 < 10 )
	printf("Five is now less than ten, that's a big surprise");

if ( TRUE ) {
	/* between the braces is the body of the if statement */
	Execute all statements inside the body
}
~~~~
* Always put braces following if statements.

## Else

~~~~
if ( TRUE ) 
{
	/* Execute these statements if TRUE */
}
else
{
	/* Execute these statements if FALSE */
}
~~~~

## Else if

* Another use of else is when there are multiple conditional statements that may all evaluate to true, yet you want only one if statement's body to execute. You can use an "else if" statement following an if statement and its body; that way, if the first statement is true, the "else if" will be ignored, but if the if statement is false, it will then check the condition for the else if statement. If the if statement was true the else statement will not be checked. It is possible to use numerous else if statements to ensure that only one block of code is executed.

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
