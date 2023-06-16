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
