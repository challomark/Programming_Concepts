# Enumeration

* Enumeration in C is a user-defined data type that consists of a set of named integer constants. It provides a way to assign meaningful names to a set of related integer values, making the code more readable and maintainable. Enumerations are often used to represent a finite set of options or choices.

* Here's the basic syntax for defining an enumeration in C:
~~~~
enum enum_name {
    value1,
    value2,
    value3,
    // ... more values
};
~~~~

* Here's a practical example:
~~~~
#include <stdio.h>

enum Day {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    enum Day today = Wednesday;
    
    printf("Today is ");
    
    switch (today) {
        case Sunday:
            printf("Sunday");
            break;
        case Monday:
            printf("Monday");
            break;
        case Tuesday:
            printf("Tuesday");
            break;
        case Wednesday:
            printf("Wednesday");
            break;
        case Thursday:
            printf("Thursday");
            break;
        case Friday:
            printf("Friday");
            break;
        case Saturday:
            printf("Saturday");
            break;
        default:
            printf("Invalid day");
    }
    
    printf("\n");
    
    return 0;
}
~~~~

* In this example, the enum Day defines a set of days of the week with their corresponding integer values. Then, the today variable is declared and assigned the value Wednesday. The program uses a switch statement to print the corresponding day's name based on the value of today.

* Enumerations can also explicitly assign integer values to the names:
~~~~
enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
~~~~

* In this case, January is assigned the value 1, and subsequent values are assigned incrementally.

* Enumerations provide a way to create symbolic names for integer values, improving code readability and making it easier to understand the meaning of constants in the code.
