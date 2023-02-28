# Switch Statement

* A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each switch case.

## Syntax

* The syntax for a switch statement in C programming language is as follows:

~~~~
switch(expression)
{
	case constant-expression:
	statement(s);
	break; /* optional */

	case constant-expression:
	statement(s);
	break; /* optional */

	/* you can have any number of case statements */
	default : /* Optional */
	statement(s);
}
~~~~

