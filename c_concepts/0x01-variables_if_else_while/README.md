# Variables

* A variable in C is a memory location associated with some name in order to store some form of data and retrieve it when required. 
* We can store different types of data in the variable and reuse the same variable for storing some other data any number of times.
* For using a variable in C, we have to first define it to tell the compiler about its existence so that compiler can allocate the required memory to it.

### Syntax:
~~~~
data_type variable_name = value;    /* defining single variable */
	OR
data_type variable_name1, variable_name2;    /* defining multiple variable */
~~~~

* data_type: Type of data that a variable can store.
* variable_name: Name of the variable given by the user.
* value: value assigned to the variable by the user

## 3 aspects of defining a variable:

#### Variable Declaration
* tells the compiler about the existence of the variable with the given name and data type. No memory is allocated to a variable in the declaration.

#### Variable Definition
* the compiler allocates some memory and some value to it. A defined variable will contain some random garbage value till it is not initialized.

#### Variable Initialization
* the process where the user assigns some meaningful value to the variable.

~~~~
/** C program to demonstrate the
 * declaration, definition and
 * initialization
 */
#include <stdio.h>

int main()
{
	/* declaration with definition */
	int defined_var;

	printf("Defined_var: %d\n", defined_var);

	/* initialization */
	defined_var = 12;

	/* declaration + definition + initialization */
	int ini_var = 25;

	printf("Value of defined_var after initialization: %d\n",defined_var);
	printf("Value of ini_var: %d", ini_var);

	return 0;
}
~~~~

## Types of Variables in C 

### Classification on the Basis of Scope:

#### Local Variables - are declared inside a function or a block of code. Their scope is limited to the block or function in which they are declared.
~~~~
/* C program to declare and print local variable inside a function. */
#include <stdio.h>

void function()
{
	int x = 10; /* local variable */
	printf("%d", x);
}

int main() { function(); }
~~~~

#### Global Variables - are declared outside the function or a block of code. Their scope is the whole program i.e. we can access the global variable anywhere in the C program after it is declared.

~~~~
/* C program to demonstrate use of global variable */
#include <stdio.h>

int x = 20; /* global variable */

void function1() { printf("Function 1: %d\n", x); }

void function2() { printf("Function 2: %d\n", x); }

int main()
{

	function1();
	function2();
	return 0;
}
~~~~

