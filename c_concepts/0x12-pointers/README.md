# Pointers in C

* In C programming, a pointer is a variable that stores the memory address of another variable. Pointers allow you to directly manipulate memory and efficiently work with data structures like arrays, linked lists, and dynamic memory allocation. Here's an overview of pointers in C:

## Declaration of Pointers
* To declare a pointer variable, you use the asterisk (*) symbol before the variable name. The type of the pointer indicates the type of the variable it points to.
~~~~
dataType *pointerName;
~~~~

* Example:
~~~~
int *ptr;     // Declaration of an integer pointer named 'ptr'
char *str;    // Declaration of a character pointer named 'str'
float *fptr;  // Declaration of a floating-point pointer named 'fptr'
~~~~

## Assigning Pointers
* Pointers are assigned the memory address of a variable using the address-of operator (&). The address-of operator returns the memory address of a variable.
~~~~
int num = 10;
int *ptr = &num;  // Assigning the memory address of 'num' to the pointer 'ptr'
~~~~

## Accessing Pointed Values
* To access the value stored at the memory location pointed to by a pointer, you use the dereference operator (*) before the pointer variable.
~~~~
int num = 10;
int *ptr = &num;
int value = *ptr;  // Accessing the value stored at the memory location pointed to by 'ptr'
~~~~

## Null Pointers
* Null pointers are pointers that do not point to any valid memory address. They are often used to indicate the absence of a valid pointer value. You can assign a null pointer by setting it equal to the constant NULL or 0.
~~~~
int *ptr = NULL;  // Assigning a null pointer to 'ptr'
~~~~

## Pointer Arithmetic
* Pointers can be manipulated using arithmetic operations such as addition and subtraction. The arithmetic is performed based on the size of the data type being pointed to.
~~~~
int numbers[5] = {1, 2, 3, 4, 5};
int *ptr = numbers;  // Pointer to the first element of 'numbers'

printf("%d\n", *ptr);  // Output: 1
printf("%d\n", *(ptr + 1));  // Output: 2 (Accessing the second element using pointer arithmetic)
~~~~

## Pointer and Arrays
* Pointers and arrays are closely related in C. An array name can be used as a pointer to the first element of the array, and you can use pointer arithmetic to access elements of an array.

### Pointers are powerful tools in C programming, allowing you to manipulate memory directly and work with complex data structures efficiently. However, they require careful handling to avoid errors like dereferencing null pointers or accessing invalid memory locations.

* Pointers in C are used to store the address of variables or a memory location. 
* This variable can be of any data type i.e, int, char, function, array, or any other pointer. 
* The pointer of type void is called Void pointer or Generic pointer.
* Void pointer can hold address of any type of variable. 
* The size of the pointer depends on the computer architecture like 16-bit, 32-bit, and 64-bit.

## Uses of pointer

* To pass arguments by reference
* For accessing array elements
* To return multiple values
* Dynamic memory allocation
* To Implement data structures
* To do System-Level Programming where memory addresses are useful
* To help locating exact value at exact location.
* To avoid compiler confusion for same variable name.
* To use in Control Tables.

