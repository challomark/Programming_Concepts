# Argc, Argv

* In C programming, you can use command-line arguments passed to a program by accessing the arguments provided to the main function. The main function in C can have two arguments:
~~~~
int main(int argc, char *argv[])
~~~~

* Here's what these arguments represent:

* argc (argument count): This is an integer that represents the number of command-line arguments passed to the program, including the program name itself.
* argv (argument vector): This is an array of strings (char *) that holds the actual command-line arguments as strings. argv[0] contains the name of the program, and argv[1] to argv[argc-1] contain the arguments passed to the program.

* Here's a simple example of how to use command-line arguments in a C program:
~~~~
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if at least one argument (the program name) is provided
    if (argc < 2) {
        printf("Usage: %s <argument>\n", argv[0]);
        return 1; // Exit with an error code
    }

    // Access and print the command-line arguments
    printf("You provided %d command-line argument(s):\n", argc - 1);

    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0; // Exit successfully
}
~~~~

* In this example, we first check if at least one argument (the program name) is provided. If not, we print a usage message and exit with an error code. Then, we loop through the command-line arguments and print each one.

* To compile and run this program, you would do something like this in your terminal:
~~~~
gcc myprogram.c -o myprogram
./myprogram arg1 arg2 arg3
~~~~

* Replace myprogram.c with your program's filename and arg1, arg2, and arg3 with the arguments you want to pass to the program.

## Two commonly used prototypes for the main function
* In C, there are two commonly used prototypes for the main function, and you can choose which one to use depending on your needs. These two prototypes are:

### int main(void)
* This prototype takes no arguments and returns an integer. It's the simplest form of the main function. You use this form when your program doesn't need to process command-line arguments passed to it.
* Example:
~~~~
#include <stdio.h>

int main(void) {
    printf("Hello, world!\n");
    return 0;
}
~~~~

### int main(int argc, char *argv[])
* This prototype takes two arguments: argc (an integer) and argv (an array of strings). It's used when your program needs to process command-line arguments. argc represents the number of command-line arguments, and argv is an array of strings containing the actual arguments.
* Example: 
~~~~
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <argument>\n", argv[0]);
        return 1;
    }
    printf("Argument provided: %s\n", argv[1]);
    return 0;
}
~~~~

* In this example, the program expects exactly one command-line argument, and it prints that argument.

* You choose the appropriate main prototype based on whether your program needs to access and process command-line arguments. If your program doesn't use command-line arguments, you can use the simpler int main(void) form. If your program needs to access command-line arguments, you should use int main(int argc, char *argv[]). The choice depends on the specific requirements of your application.

## How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
* In C, you can use __attribute__((unused)) or (void) to indicate to the compiler that a variable or parameter is intentionally not being used in a function.
* This is often done to suppress compiler warnings about unused variables or parameters, which can be helpful for clarity and code cleanliness. Here's how you can use both approaches:

### Using __attribute__((unused)):
* To use __attribute__((unused)), you typically place it next to the variable or parameter declaration. This is a compiler-specific attribute, and its usage may vary depending on the compiler you are using. 
* Here's an example:
~~~~
void unused_variable_example() {
    int unused_variable __attribute__((unused));
    // The variable 'unused_variable' is intentionally not used.
}
~~~~
* By using this attribute, you inform the compiler that unused_variable is intentionally unused, and it should not generate any warnings about it.

### Using (void):
* Another common technique is to cast the unused variable or parameter to (void) to explicitly tell the compiler that you don't intend to use it within the function.
* Here's an example:
~~~~
void unused_parameter_example(int unused_param) {
    (void)unused_param;
    // The parameter 'unused_param' is intentionally not used.
}
~~~~
* By casting unused_param to (void), you achieve the same result: telling the compiler to suppress warnings about the unused parameter.

#### Both of these techniques are useful for indicating your intent to the compiler and keeping your code clean. Choose the one that you find more readable or that aligns with your team's coding standards. Additionally, remember that not all compilers support __attribute__((unused)), but casting to (void) is a more portable approach.
