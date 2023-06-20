# Logical Operators in C

* In C, logical operators are used to combine or manipulate Boolean values (true or false) and perform logical operations. They are primarily used in conditional statements to evaluate multiple conditions or negate conditions. Here are the three logical operators available in C:

## Logical AND (&&)

* The logical AND operator returns true if both the operands are true. It returns false otherwise.
~~~~
int a = 5;
int b = 7;
if (a > 0 && b < 10) {
    // Executes if both conditions are true
}
~~~~

## Logical OR (||)

* The logical OR operator returns true if at least one of the operands is true. It returns false if both operands are false.
~~~~
int a = 5;
int b = 7;
if (a > 0 || b < 10) {
    // Executes if either condition is true
}
~~~~

## Logical NOT (!)

* The logical NOT operator is a unary operator that reverses the logical state of its operand. It returns true if the operand is false, and false if the operand is true.
~~~~
int a = 5;
if (!(a > 10)) {
    // Executes if the condition is false
}
~~~~

### What to remember...

#### And Operators

* True and True is True
* True and False is False
* F T -> F
* F F -> F

#### Or Operators

* T T -> T
* T F -> T
* F T -> T
* F F -> F
