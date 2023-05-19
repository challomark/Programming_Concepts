# C - Functions

* A function is a group of statements that together perform a task.
* Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.
* You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division is such that each function performs a specific task.

## Function Declaration

* A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.
* The C standard library provides numerous built-in functions that your program can call. For example, strcat() to concatenate two strings, memcpy() to copy one memory location to another location, and many more functions.

## Defining a function
~~~~
return_type function_name( parameter list ) {
   body of the function
}
~~~~

* A function definition consists of a function header and a function body.
* Parts of a function:
	* Return Type − A function may return a value. The return_type is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword void.
	* Function Name − This is the actual name of the function. The function name and the parameter list together constitute the function signature.
	* Parameters − A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.
	* Function Body − The function body contains a collection of statements that define what the function does.

~~~~
#include <stdio.h>
 
/* global variable declaration */
int a = 20;
 
int main () {

  /* local variable declaration in main function */
  int a = 10;
  int b = 20;
  int c = 0;

  printf ("value of a in main() = %d\n",  a);
  c = sum( a, b);
  printf ("value of c in main() = %d\n",  c);

  return 0;
}

/* function to add two integers */
int sum(int a, int b) {

   printf ("value of a in sum() = %d\n",  a);
   printf ("value of b in sum() = %d\n",  b);

   return a + b;
}
~~~~

## Initializing Local and Global Variables
* When a local variable is defined, it is not initialized by the system, you must initialize it yourself. Global variables are initialized automatically by the system when you define them as follows:
	* int - 0
	* char - '\0'
	* float - 0
	* double - 0
	* pointer - NULL

