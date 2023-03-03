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
// C program to demonstrate the
// declaration, definition and
// initialization
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

