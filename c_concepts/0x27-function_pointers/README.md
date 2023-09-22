# Function Pointers

* Function pointers in C are pointers that point to functions rather than data. They allow you to create more flexible and dynamic code because you can use them to call different functions at runtime based on conditions or user inputs.

* Function pointers are particularly useful in scenarios such as callback mechanisms and implementing data structures like function tables or dispatch tables.

* Here's how to declare, initialize, and use function pointers in C:

### Declaration
* To declare a function pointer, you need to specify the function's return type and parameter types that it points to. The general syntax is:
~~~~
return_type (*pointer_name)(parameter_types);
~~~~

* For example, if you have a function int add(int a, int b), you can declare a function pointer like this:
~~~~
int (*addPtr)(int, int);
~~~~

### Initialization
* To initialize a function pointer, you assign it the address of a function with a matching signature. For example:
~~~~
addPtr = &add; // Assign the address of the add function to addPtr
// or
addPtr = add;  // The '&' operator is optional
~~~~

### Function Call
* You can call the function using the function pointer like you would call the function directly:
~~~~
int result = addPtr(3, 5); // Calls the add function through addPtr
~~~~
* This is equivalent to calling add(3, 5).

* Here's a complete example:
~~~~
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int); // Declare a function pointer

    operation = add; // Assign the address of the add function
    printf("3 + 5 = %d\n", operation(3, 5));

    operation = subtract; // Assign the address of the subtract function
    printf("7 - 2 = %d\n", operation(7, 2));

    return 0;
}
~~~~

* In this example, we declare a function pointer operation, assign it the address of different functions (add and subtract), and use it to call those functions dynamically.

* Function pointers can be powerful in situations where you need to select or switch between different functions based on runtime conditions, making your code more flexible and modular.

## What does a function pointer exactly hold
* A function pointer in C holds the address of a function in memory. It doesn't hold the actual code or data associated with the function; instead, it stores a reference to the location in memory where the function's machine code begins.

* In more technical terms:
	* Memory Address: A function pointer holds a memory address (a pointer) that points to the starting address of the machine code instructions of a specific function in your program's memory.
	* Function Signature: It also stores information about the function's signature, such as its return type and parameter types. This information is crucial because it tells the compiler how to correctly call the function using the pointer.

* When you use a function pointer to call a function, the program looks up the memory location stored in the function pointer, follows that address, and begins executing the machine code instructions at that location. The function pointer essentially acts as a way to indirectly invoke a function.

* Here's a simplified illustration of how it works:
~~~~
// Declare a function pointer for a function with no arguments and returning int
int (*functionPtr)();

// Assign the address of a function named "myFunction" to the pointer
functionPtr = myFunction;

// Call the function using the pointer
int result = functionPtr();
~~~~

* In this example, functionPtr holds the memory address of the myFunction function, and when you call functionPtr(), it effectively calls myFunction() by executing the instructions at that address.

* Function pointers are powerful because they allow you to choose and call functions dynamically at runtime, enabling dynamic behaviour and function swapping in your code.

## Where does a function pointer point to in the virtual memory
* Here's a simplified explanation of where a function pointer typically points in the virtual memory:
	* Program's Address Space: When a C program is loaded into memory, it is allocated a portion of the virtual address space by the operating system. This space includes code, data, stack, and heap segments.
	* Function Memory Locations: Each function defined in your C program has its machine code instructions stored in memory. The function pointer holds the virtual memory address of the first instruction of the function.
	* Operating System and Compiler: The specific layout of a program in memory is managed by the operating system and the compiler/linker tools you use. The actual memory address will depend on various factors, including the OS's memory management, compiler optimizations, and any libraries or system code your program uses.
	* Dynamic Loading: In more complex scenarios, such as when working with shared libraries or dynamically loaded modules, function pointers may point to functions located in separate memory segments that are loaded at runtime.

#### In summary, while a function pointer conceptually points to the starting address of a function's machine code, the actual memory address in the virtual memory space is determined by the operating system and compiler/linker tools. The programmer typically doesn't need to know or manipulate these addresses directly; they work with function pointers as symbolic references to functions in their code.
