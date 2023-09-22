# Arrays

* In C programming, an array is a collection of elements of the same data type, grouped together under a single name. Arrays provide a convenient way to store and access multiple values of the same type. Here's how arrays work in C:

## Declaration
* To declare an array, you need to specify its data type and size. The size determines the number of elements the array can hold. The general syntax for declaring an array is:
~~~~
dataType arrayName[arraySize];
~~~~

* Example:
~~~~
int numbers[5];  // Declaration of an integer array named 'numbers' with a size of 5
float prices[10];  // Declaration of a floating-point array named 'prices' with a size of 10
char characters[50];  // Declaration of a character array named 'characters' with a size of 50
~~~~

## Initialization
* Arrays can be initialized at the time of declaration using an initializer list, which specifies the initial values of the elements. The number of values in the initializer list must match the size of the array. Here's an example:
~~~~
int numbers[5] = {2, 4, 6, 8, 10};  // Initialization of an integer array named 'numbers' with initial values
~~~~

* If fewer values are provided in the initializer list than the size of the array, the remaining elements are automatically initialized to zero (for numeric types) or the null character '\0' (for character arrays).

## Accessing Array Elements
* Elements in an array are accessed using their index, which represents their position within the array. Array indices start from 0 for the first element and go up to size-1 for the last element. To access an element, you can use the following syntax:
~~~~
arrayName[index];
~~~~

* Example: 
~~~~
int numbers[5] = {2, 4, 6, 8, 10};
int firstElement = numbers[0];  // Accessing the first element (index 0) of the 'numbers' array
int thirdElement = numbers[2];  // Accessing the third element (index 2) of the 'numbers' array
~~~~

## Modifying Array Elements
* You can modify the value of an array element by assigning a new value to it using the assignment operator (=).
~~~~
int numbers[5] = {2, 4, 6, 8, 10};
numbers[1] = 12;  // Modifying the second element (index 1) of the 'numbers' array
~~~~

## Iterating Over Arrays
* You can use loops, such as for or while, to iterate over the elements of an array and perform operations on them.
~~~~
int numbers[5] = {2, 4, 6, 8, 10};

for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);  // Printing each element of the 'numbers' array
}
~~~~

## Multidimensional Arrays
* C supports multidimensional arrays, such as 2D arrays, which are essentially arrays of arrays.
~~~~
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
~~~~

## Array Size and sizeof:
* You can determine the size (in bytes) of an array using the sizeof operator:
~~~~
int size = sizeof(numbers); // Returns the total size of the 'numbers' array in bytes.
~~~~
* Remember that arrays have a fixed size, which is determined at compile time. If you need a dynamic data structure that can grow or shrink, consider using pointers and dynamic memory allocation with functions like malloc and realloc.


### Arrays in C provide a convenient way to work with collections of data. They are widely used in various programming tasks, such as storing data, performing calculations, and implementing data structures and algorithms.
