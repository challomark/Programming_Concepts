# Functions in C

* In C programming, functions are self-contained blocks of code that perform specific tasks or operations. Functions provide a way to modularize code, improve code organization, and promote code reusability. Here's an overview of functions in C:

## Function Declaration and Definition
* A function is declared by specifying its return type, name, and any parameters it accepts. The declaration serves as a contract for the function and informs the compiler about the function's existence. The function is defined separately, which contains the actual implementation of the function's code.
~~~~
returnType functionName(parameters);

returnType functionName(parameters) {
    // Function body (code)
}
~~~~

* Example:
~~~~
// Function declaration
int addNumbers(int num1, int num2);

// Function definition
int addNumbers(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}
~~~~

## Function Parameters and Return Types
* Functions can have zero or more parameters, which are input values passed to the function. Parameters are defined within the parentheses in the function declaration and definition. Functions can also have a return type, which specifies the type of value the function returns after execution.

* Example:
~~~~
int addNumbers(int num1, int num2);  // Function declaration

int addNumbers(int num1, int num2) {  // Function definition
    int sum = num1 + num2;
    return sum;
}
~~~~

## Function Call
* To use a function, you need to call it by its name, passing appropriate arguments (if any) in the parentheses. The function call evaluates the function and returns the result (if it has a return value).

* Example:
~~~~
int result = addNumbers(5, 3);  // Function call

printf("Sum: %d\n", result);  // Output: Sum: 8
~~~~

## Function Prototypes
* Function prototypes provide a way to declare the existence of a function before its actual definition. Prototypes are typically placed at the beginning of the code or in header files to allow the compiler to be aware of the function's signature before it is used.

* Example:
~~~~
// Function prototype
int addNumbers(int num1, int num2);

int main() {
    int result = addNumbers(5, 3);  // Function call
    printf("Sum: %d\n", result);
    return 0;
}

// Function definition
int addNumbers(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}
~~~~

## Function Parameters: Pass by Value
* In C, function parameters are passed by value, which means the function receives a copy of the argument's value. Modifying the parameter within the function does not affect the original argument.

* Example:
~~~~
void modifyValue(int num) {
    num = num + 1;  // Modifying the local copy of 'num'
}

int main() {
    int number = 5;
    modifyValue(number);  // Function call
    printf("Number: %d\n", number);  // Output: Number: 5
    return 0;
}
~~~~

### Functions are essential building blocks in C programming, enabling code organization, reusability, and modularity. They allow you to encapsulate logic into separate units, making programs easier to understand and maintain.
