# Preprocessor

* In C programming, a preprocessor is a tool that processes the source code before it's actually compiled by the compiler. Its main purpose is to perform text-based transformations on the source code before the compilation takes place. The preprocessor is responsible for handling directives that begin with a hash symbol (#), such as #include, #define, and more. The preprocessor's actions are often referred to as "preprocessing."

* Here are some commonly used preprocessor directives and their functions:

## #include

* This directive is used to include the contents of another file in the current file. It's commonly used to include header files that contain function prototypes and definitions. 
* For example:
~~~~
#include <stdio.h>
~~~~

## #define

* This directive is used to define constants or macros. Macros are typically short pieces of code that are replaced with their respective definitions during preprocessing. 
* For example:
~~~~
#define PI 3.14159
~~~~

## #ifdef, #ifndef, #else, #endif

* These directives are used for conditional compilation. They allow you to include or exclude portions of code based on certain conditions. 
* For example:
~~~~
#ifdef DEBUG
// Debugging code
#endif
~~~~

## #pragma

* This directive provides instructions to the compiler about how to process the code. Pragmas are compiler-specific and can be used to enable or disable optimizations, control alignment, etc.

## #error

* This directive is used to generate a compilation error with a specified message. 
* For example:
~~~~
#ifdef MAX_VALUE
#error MAX_VALUE is already defined
#endif
~~~~

## #warning

* This directive generates a warning during compilation with a specified message. It's often used to alert developers about potential issues.

## #undef

* This directive is used to undefine a previously defined macro.

## #line

* This directive allows you to change the line number and file name that are associated with errors and warnings generated during compilation.

#### The preprocessor's actions are performed before the actual compilation of the code, and the resulting code after preprocessing is then passed to the compiler for further processing and generation of machine code.

#### It's important to note that while the preprocessor provides powerful tools for code organization and conditional compilation, excessive use of macros and conditional directives can make the code harder to read and maintain. Therefore, it's recommended to use these features judiciously and to adhere to best practices for clear and maintainable code.

# Predefined Macros

* Predefined macros in C are identifiers that are automatically defined by the compiler, providing information about the environment, the code being compiled, and other important properties. These macros can be useful for conditional compilation, version checks, and other tasks that require knowledge about the compilation process. Here are some commonly used predefined macros in C:
	* __FILE__: This macro expands to the current source file name as a string literal.
	* __LINE__: This macro expands to the current line number within the source file as an integer constant.
	* __DATE__: This macro expands to the current date in the format "MMM DD YYYY" as a string literal. The date is the one when the source file was last compiled.
	* __TIME__: This macro expands to the current time in the format "HH:MM:SS" as a string literal. The time is the one when the source file was last compiled.
	* __STDC__: This macro is defined when the compiler is in Standard C mode (C89/C90).
	* __STDC_VERSION__: This macro indicates the version of the C standard that the compiler conforms to. For example, C89 is denoted by 199409L, C99 by 199901L, and C11 by 201112L.
	* __func__: This macro expands to the name of the current function as a string literal. It's only available in C99 and later.
	* __PRETTY_FUNCTION__: Similar to __func__, this macro expands to the name of the current function, but the compiler may also provide additional information to make it more readable.
	* __VA_ARGS__: This macro is used for handling variable argument lists in macros. It represents the ellipsis (...) in a function-like macro's parameter list.
	* __LINE__: This macro expands to the current line number as an integer.
	* __FILE__: This macro expands to the current file name as a string.
	* __FUNCTION__: This macro is similar to __func__ and is available in GCC. It represents the name of the current function as a string literal.

* These macros are helpful for various purposes, including debugging, logging, and conditionally compiling code based on the compiler's features and the code's context. Keep in mind that the availability of these macros might vary slightly between different compilers and versions.
