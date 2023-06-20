# Header Files in C

* In C programming, header files provide a way to declare the interfaces (function prototypes, constants, and type definitions) of functions and data structures that are used across multiple source code files. Header files are included in C programs using the #include preprocessor directive. Here's an overview of header files in C:

## Header File Declaration
* A header file typically has the .h extension and contains declarations and definitions that are meant to be shared across multiple source code files. It usually includes function prototypes, constant definitions, and structure declarations.

* Example of a header file named "myheader.h":
~~~~
// Function prototype
int addNumbers(int num1, int num2);

// Constant declaration
#define MAX_VALUE 100

// Structure declaration
struct Point {
    int x;
    int y;
};
~~~~

## Including Header Files
* To make use of the declarations and definitions in a header file, you need to include it in your source code using the #include directive. The #include directive instructs the C preprocessor to replace the directive with the content of the specified header file.

* Example of including the "myheader.h" header file in a source code file:
~~~~
#include "myheader.h"

int main() {
    int result = addNumbers(5, 3);
    printf("Sum: %d\n", result);
    return 0;
}
~~~~

## System Header Files
* C programming also provides system or standard header files that come with the compiler and contain commonly used library functions and macros. System header files are enclosed in angle brackets (<>) instead of double quotes ("") during inclusion.

* Example of including the standard "stdio.h" header file:
~~~~
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
~~~~

## Header Guards
* Header guards, also known as include guards or conditional inclusion directives, are used to prevent multiple inclusions of the same header file. They ensure that the contents of a header file are included only once in a source code file, even if the header file is included multiple times indirectly.

* Example of using header guards in a header file:
~~~~
#ifndef MYHEADER_H
#define MYHEADER_H

// Function prototype
int addNumbers(int num1, int num2);

// Constant declaration
#define MAX_VALUE 100

// Structure declaration
struct Point {
    int x;
    int y;
};

#endif  // MYHEADER_H
~~~~

#### Header files play a crucial role in C programming by promoting modularity, code reuse, and organization. They allow you to separate interface declarations from the implementation details, making it easier to manage large projects with multiple source code files.
