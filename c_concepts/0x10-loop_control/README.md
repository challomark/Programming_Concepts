# Loop Control Statements in C

### We use the loop control statements in C language for performing various loop operations until we find the condition given in a program to be true. 

* The control comes out of a loop statement when the condition given to us turns out to be false.
* Looping is basically a phase in which we repeat the very same process multiple times unless it specifies any specific type of condition.

## Types of Loops in C

* for loop - performs the execution of a sequence of various statements various times, then abbreviates the available code that manages the variables of the loop.

* while loop - used for repeating any given statement or a group of various statements whenever the condition we have is true. Thus, it will perform the testing of the condition before the execution of the body of the loop.

* do-while loop - is just like the while statement. The only exception is that the do-while statement performs the testing of the condition that is present at the very end of a loop body.
 
* nested loops - we can make use of a single loop or multiple loops inside any other loop, such as for, while, or even the do-while loop.

#### Check bookmarks for more info
 
## Types of Loop Control Statements in C

* goto statement - transfers the control to any labeled statement.

* continue statement - will cause a loop to skip the remainder present in its body and then retest its actual condition (immediately) before reiterating it.

* break statement - ultimately terminates the switch statement and the loop statement. It then transfers the statement execution after following the switch or loop immediately.

## Break statement syntax 
~~~~
#include <stdio.h>

int main () 
{
	/* definition of the local variable */

	int x = 20;

	/* execution of the while loop */

	while( x < 40 ) {

	printf(“The available value of x is: %d\n”, x);

	x++;

	if( x > 30) 
	{
	/* termination of the loop with the use of the break statement */

	break;
	}

	}
	return 0;
}
~~~~

### Output
* The available value of x is: 20
* The available value of x is: 21
* The available value of x is: 22
* The available value of x is: 23
* The available value of x is: 24
* The available value of x is: 25

## Continue statement syntax
~~~~
#include <stdio.h>

int main () 
{
	/* definition of the local variable */

	int x = 10;

	/* execution of the do loop */

	do {

	if( x == 15) {

	/* skipping of the iteration */

	x = x + 1;

	continue;

	}	

	printf(“The given value of a is: %d\n”, x);

	x++;

	} while( x < 20 );

	return 0;

}
~~~~

### Output
* The given value of a is: 10
* The given value of a is: 11
* The given value of a is: 12
* The given value of a is: 13
* The given value of a is: 14
* The given value of a is: 16
* The given value of a is: 17
* The given value of a is: 18
* The given value of a is: 19

##Goto statement syntax

* goto label;

..

.

label: statement;

~~~~
#include <stdio.h>

int main ()
{

	/* definition of the local variable */

	int x = 10;

	/* execution of the do loop */
	LOOP:do {

	if( x == 15) /* skipping of the iteration */

	x = x + 1;

	goto LOOP;

	}

	printf(“The value of the variable x is: %d\n”, x);

	x++;
	}
	while( a < 20 );

	return 0;

}
~~~~

### Output
* The value of the variable x is: 10
* The value of the variable x is: 11
* The value of the variable x is: 12
* The value of the variable x is: 13
* The value of the variable x is: 14
* The value of the variable x is: 16
* The value of the variable x is: 17
* The value of the variable x is: 18
* The value of the variable x is: 19

## The Condition of an Infinite Loop

* Any loop in a program will ultimately become an infinite loop in case the condition never happens to be false. In such cases, we must make use of the for loops (traditionally). Just because we don’t require any of the three expressions that basically constitute the for loop, we can ultimately create an endless loop. We can do so if we leave the conditional expression to be empty.

### Infinite loop syntax
~~~~
#include <stdio.h>

int main () 
{
	for( ; ; ) 
	{
	printf(“The available loop here will run forever in circles.\n”);

	}

	return 0;

}
~~~~
