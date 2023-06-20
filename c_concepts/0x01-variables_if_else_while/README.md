# Variables in C

* In C programming, variables are used to store and manipulate data. A variable is a named location in memory that holds a value with a specific data type. Variables in C have the following characteristics:

## Declaration
* Before using a variable, it needs to be declared with its data type. The declaration specifies the variable's name and the type of data it can hold. For example:
~~~~
int age;         // Declaration of an integer variable named 'age'
float salary;    // Declaration of a floating-point variable named 'salary'
char letter;     // Declaration of a character variable named 'letter'
~~~~

## Initialization
* Variables can also be initialized at the time of declaration. Initialization assigns an initial value to the variable. For example:
~~~~
int count = 0;           // Initialization of an integer variable named 'count' with the value 0
float pi = 3.14;         // Initialization of a floating-point variable named 'pi' with the value 3.14
char grade = 'A';        // Initialization of a character variable named 'grade' with the value 'A'
~~~~

## Assignment
* Once declared, variables can be assigned new values using the assignment operator (=). The assignment operator assigns the value on the right side to the variable on the left side. For example:
~~~~
age = 25;               // Assigning the value 25 to the variable 'age'
salary = 5000.50;       // Assigning the value 5000.50 to the variable 'salary'
letter = 'X';           // Assigning the character 'X' to the variable 'letter'
~~~~

## Data Types
* C supports various data types, including integers (int), floating-point numbers (float, double), characters (char), and more. Each data type has a specific size and range of values it can hold.

## Scope
* The scope of a variable determines its visibility and accessibility within a program. Variables can be declared globally (outside any function) or locally (inside a function or block). Local variables are accessible only within the scope where they are defined.

## Naming Rules
*  Variables in C must follow certain naming rules. They must start with a letter (or underscore) and can contain letters, digits, or underscores. C is case-sensitive, so uppercase and lowercase letters are considered distinct.

### Variables are widely used in C programming to store and manipulate data during program execution. They provide a way to store temporary values, perform calculations, and store user input, among many other purposes.
