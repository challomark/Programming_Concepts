# Ternary Operators in C

* Use the ternary operator for decision making in place of longer if and else conditional statements.
* It helps to think of the ternary operator as a shorthand way or writing an if-else statement. 

## The ternary operator take three arguments:

* The ternary operator take three arguments:

	* The first is a comparison argument.
	* The second is the result upon a true comparison.
	* The third is the result upon a false comparison.

### Syntax

* condition ? value_if_true : value_if_false

* The statement evaluates to value_if_true if condition is met, and value_if_false otherwise.

~~~~
int a = 10, b = 20, c;

c = (a < b) ? a : b;

printf("%d", c);
~~~~

* Output of the example above should be: 10
* c is set equal to a, because the condition a < b was true.
* Remember that the arguments value_if_true and value_if_false must be of the same type, and they must be simple expressions rather than full statements.

### Ternary operators can be nested just like if-else statements.

~~~~
int a = 1, b = 2, ans;
if (a == 1) {
    if (b == 2) {
        ans = 3;
    } else {
        ans = 5;
    }
} else {
    ans = 0;
}
printf ("%d\n", ans);
~~~~

* Can be written as:

~~~~
int a = 1, b = 2, ans;
ans = (a == 1 ? (b == 2 ? 3 : 5) : 0);
printf ("%d\n", ans);
~~~~

* The output of both sets of code should be: 3
