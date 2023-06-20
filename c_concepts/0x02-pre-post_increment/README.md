# Increment and Decrement Operators in C

* In C, the increment and decrement operators are used to increase or decrease the value of a variable by a specific amount. These operators are shorthand notations and provide a concise way to update the value of a variable. The two commonly used operators are:

### Increment operator (++)

* The increment operator (++) is used to increase the value of a variable by 1. It can be used in two ways:
	* Pre-increment: (++variable) - The value of the variable is incremented before its use in the expression.
	* Post-increment: (variable++) - The value of the variable is incremented after its use in the expression.

* Here's an example to illustrate the usage of the increment operator:
~~~~
int num = 5;
int result1 = ++num; // Pre-increment: num is incremented to 6, and result1 is assigned the value 6.
int result2 = num++; // Post-increment: num is incremented to 7, but result2 is assigned the previous value 6.
~~~~

### Decrement operator (--)

* The decrement operator (--) is used to decrease the value of a variable by 1. Like the increment operator, it can also be used in two ways:
	* Pre-decrement: (--variable) - The value of the variable is decremented before its use in the expression.
	* Post-decrement: (variable--) - The value of the variable is decremented after its use in the expression.

* Here's an example showing the decrement operator in action:
~~~~
int num = 8;
int result1 = --num; // Pre-decrement: num is decremented to 7, and result1 is assigned the value 7.
int result2 = num--; // Post-decrement: num is decremented to 6, but result2 is assigned the previous value 7.
~~~~
