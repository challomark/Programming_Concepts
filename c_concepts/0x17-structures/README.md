# Struct

* In C programming, a struct (short for structure) is a user-defined data type that allows you to combine different types of variables under a single name. It is used to group related variables together to represent a logical entity.

* A struct consists of one or more members, where each member can be of a different data type (e.g., int, float, char, etc.). These members are defined within the struct definition and can be accessed and manipulated as a single unit.

* Here's an example of defining a struct in C:
~~~~
struct Person {
    char name[50];
    int age;
    float height;
};
~~~~

* In this example, we have defined a struct called "Person" that contains three members: "name," "age," and "height." "name" is an array of characters with a maximum size of 50, "age" is an integer, and "height" is a floating-point number.

* To use the struct, you can declare variables of the struct type and assign values to its members, like this:
~~~~
struct Person person1;

strcpy(person1.name, "John");
person1.age = 25;
person1.height = 1.75;
~~~~

* You can also access the members of a struct using the dot (.) operator, like this:
~~~~
printf("Name: %s\n", person1.name);
printf("Age: %d\n", person1.age);
printf("Height: %.2f\n", person1.height);
~~~~

* Structs are often used to create complex data structures, such as linked lists, trees, and records. They provide a way to organize and manipulate related data efficiently in C programs.


## Array of a Structure

* In C programming, you can create an array of structures by combining the concept of arrays and structures. This allows you to store multiple instances of a structure type in a contiguous block of memory.

* Here's an example that demonstrates how to create an array of structures:
~~~~
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person people[3]; // Array of three Person structures
    
    // Accessing and modifying elements in the array
    strcpy(people[0].name, "John");
    people[0].age = 25;
    
    strcpy(people[1].name, "Alice");
    people[1].age = 30;
    
    strcpy(people[2].name, "Bob");
    people[2].age = 28;
    
    // Accessing and printing elements in the array
    for (int i = 0; i < 3; i++) {
        printf("Person %d\n", i+1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("\n");
    }
    
    return 0;
}
~~~~

* In this example, we have created an array of Person structures called people with a size of 3. Each element of the array represents a person with a name and an age.

* We can access and modify the elements of the array using the index notation people[index]. For example, people[0] refers to the first element of the array, people[1] refers to the second element, and so on.

* To access the members of a structure within the array, we use the dot (.) operator. For instance, people[0].name refers to the name member of the first structure in the array.

* The example demonstrates how to assign values to the array elements and print them using a loop.

* Keep in mind that when working with arrays of structures, you need to ensure that you stay within the bounds of the array to avoid accessing elements beyond its size.

## Structure Pointer (Pointer to a Structure)

* In C programming, you can use structure pointers to work with structures dynamically and allocate memory for them at runtime. Structure pointers allow you to manipulate and access the members of a structure through a pointer variable. 

* Here's an example that illustrates the usage of structure pointers:
~~~~
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person *personPtr; // Declare a structure pointer
    
    // Allocate memory for a structure
    personPtr = (struct Person *)malloc(sizeof(struct Person));
    
    // Access and modify structure members using the pointer
    strcpy(personPtr->name, "John");
    personPtr->age = 25;
    
    // Access and print structure members using the pointer
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    
    // Free the dynamically allocated memory
    free(personPtr);
    
    return 0;
}
~~~~

* In this example, we declare a structure pointer personPtr of type struct Person. We then allocate memory for a struct Person using the malloc function and assign the memory address to personPtr.

* To access and modify the members of the structure using the pointer, we use the arrow operator (->). For example, personPtr->name refers to the name member of the structure pointed to by personPtr.

* Similarly, to print the structure members using the pointer, we use the arrow operator in the printf statements.

* Finally, it's important to free the dynamically allocated memory using the free function to avoid memory leaks.

* Structure pointers are particularly useful when working with dynamic memory allocation, passing structures to functions by reference, or when dealing with arrays of structures dynamically.

## Union

* In C programming, a union is a user-defined data type that allows you to store different types of data in the same memory location. Unlike a structure, which allocates memory for each member independently, a union allocates a single block of memory that can be interpreted as different types based on which member is being accessed.

* Here's an example that demonstrates the usage of unions:
~~~~
#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    union Data data;

    data.intValue = 42;
    printf("Integer value: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Float value: %.2f\n", data.floatValue);

    strcpy(data.stringValue, "Hello");
    printf("String value: %s\n", data.stringValue);

    printf("After assigning string value: Integer value: %d\n", data.intValue);

    return 0;
}
~~~~

* In this example, we define a union called Data with three members: intValue of type int, floatValue of type float, and stringValue of type char array.

* We create a variable data of type union Data. We can assign values to the different members of the union and access them interchangeably.

* In the example, we first assign an integer value to data.intValue and then print it. Next, we assign a float value to data.floatValue and print it. Finally, we assign a string value using strcpy to data.stringValue and print it. Notice that when we assign the string value, it affects the memory location of the union, which means accessing data.intValue afterward will give unpredictable results.

* The memory allocated for a union is determined by the size of its largest member. In the example above, the memory allocated for union Data is the size of stringValue (20 bytes), as it is the largest member.

* Unions are often used when you need to represent different types of data in the same memory location, and you only need to access one member at a time. They can be particularly useful in scenarios such as saving memory in certain data structures or dealing with binary data where different interpretations of the same memory block are required. However, be cautious when accessing the members of a union to avoid unintended consequences.

## Typedef

* In C programming, you can use the typedef keyword in combination with structures to create a new name (alias) for a structure type. This allows you to define a structure and its associated type in a single statement, making the code more concise and readable.

* Here's an example of using typedef with structures:
~~~~
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person person1;

    strcpy(person1.name, "John");
    person1.age = 25;

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}
~~~~

* In this example, we define a new type called Person using typedef and a structure definition. The structure contains two members: name of type char array and age of type int.

* By using typedef, we can create an alias for the structure definition (struct { ... }) and directly use the alias as a type (Person). This eliminates the need to explicitly write struct each time we declare variables of this structure type.

* In the main() function, we declare a variable person1 of type Person and assign values to its members using the dot (.) operator. We can then access and print the members as usual.

* Using typedef with structures helps improve code readability, especially when working with complex or nested structures. It provides a way to create meaningful and self-explanatory type names that are easier to use and understand.
