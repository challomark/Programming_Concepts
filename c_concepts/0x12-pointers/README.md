# C Pointers

* Pointers in C are used to store the address of variables or a memory location. 
* This variable can be of any data type i.e, int, char, function, array, or any other pointer. 
* The pointer of type void is called Void pointer or Generic pointer.
* Void pointer can hold address of any type of variable. 
* The size of the pointer depends on the computer architecture like 16-bit, 32-bit, and 64-bit.

### Syntax:
* datatype *var_name; 

~~~~
/* C program to illustrate Pointers */
#include <stdio.h>

void geeks()
{
	int var = 20;

	/* declare pointer variable */
	int* ptr;

	/* note that data type of ptr and var must be same
	ptr = &var */

	/* assign the address of a variable to a pointer */
	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);
}

/* Driver program */
int main()
{
	geeks();
	return 0;
}
~~~~

## Uses of pointer

* To pass arguments by reference
* For accessing array elements
* To return multiple values
* Dynamic memory allocation
* To Implement data structures
* To do System-Level Programming where memory addresses are useful
* To help locating exact value at exact location.
* To avoid compiler confusion for same variable name.
* To use in Control Tables.

## How to Use Pointers and more info check out https://www.geeksforgeeks.org/c-pointers/
