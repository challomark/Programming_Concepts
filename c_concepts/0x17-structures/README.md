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
