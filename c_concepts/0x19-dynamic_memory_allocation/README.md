# Dynamic Memory Allocation

* Dynamic memory allocation in C refers to the process of allocating and managing memory for variables and data structures at runtime, rather than at compile time. This is done using functions provided by the C standard library, most commonly malloc, calloc, realloc, and free.

## Malloc

* Stands for "memory allocation." It is used to allocate a specified amount of memory and returns a pointer to the first byte of the allocated memory block. The syntax is:
~~~~
void* malloc(size_t size);
~~~~

* size: The number of bytes of memory to allocate. This parameter specifies the size of the memory block you want to allocate.

* The malloc function returns a pointer of type void* (a generic pointer) to the allocated memory block if the allocation is successful. If the allocation fails (usually due to insufficient memory), the function returns a NULL pointer.
* It's important to cast the returned pointer to the appropriate data type before using it. 

* Example:
~~~~
int* dynamicArray = (int*)malloc(5 * sizeof(int));
~~~~

* A few key points to remember when using malloc:
	* Always check if the memory allocation was successful by verifying if the returned pointer is not NULL.
	* Memory allocated using malloc is not initialized by default. It may contain random or garbage values, so make sure to initialize it before use if necessary.
	* After you're done using the allocated memory, free it using the free function to prevent memory leaks. Set the pointer to NULL after freeing to avoid accidental use of freed memory.
	* Avoid casting the result of malloc in C++, as it's not necessary and can mask potential type-related issues. However, in C, casting is still considered good practice.
 
## Calloc

* Stands for "contiguous allocation." It allocates memory for an array of elements, initializing all bytes to zero. The syntax is:
~~~~
void* calloc(size_t num_elements, size_t element_size);
~~~~

* Example:
~~~~
double* dynamicArray = (double*)calloc(10, sizeof(double));
~~~~

## Realloc

* Stands for "reallocate." It is used to resize a previously allocated memory block. The syntax is:
~~~~
void* realloc(void* ptr, size_t new_size);
~~~~

* Example:
~~~~
void* realloc(void* ptr, size_t new_size);
~~~~

## Free

* Used to release memory previously allocated using malloc, calloc, or realloc. It doesn't delete the pointer itself; it just marks the allocated memory as available for reuse.
~~~~
void free(void* ptr);
~~~~

* Example:
~~~~
free(dynamicArray);
dynamicArray = NULL; // Good practice to set the pointer to NULL after freeing
~~~~

### It's important to note a few things:

* Always check if the memory allocation was successful (i.e., the pointer returned is not NULL) before using the allocated memory.
* After you're done using dynamically allocated memory, always free it to avoid memory leaks.
* Using freed memory can lead to undefined behavior, so be careful not to dereference or modify memory after freeing it.

### Here's a simple example of dynamic memory allocation in C:
~~~~
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements;
    printf("Enter the number of elements: ");
    scanf("%d", &num_elements);

    int* dynamicArray = (int*)malloc(num_elements * sizeof(int));

    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < num_elements; i++) {
        dynamicArray[i] = i * i;
        printf("%d ", dynamicArray[i]);
    }

    free(dynamicArray);
    dynamicArray = NULL;

    return 0;
}
~~~~

#### Remember to always free dynamically allocated memory to prevent memory leaks and ensure efficient memory usage.
