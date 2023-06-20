# Strings in C

* In C programming, strings are represented as arrays of characters terminated by a null character ('\0'). String manipulation in C involves a set of library functions from the <string.h> header file. Here's an overview of working with strings in C:

## String Declaration
* Strings in C are declared as character arrays with a null character at the end to mark the end of the string.

* Example: 
~~~~
char str1[10] = "Hello";      // Declaration with initialization
char str2[] = "World";        // Declaration with automatic size determination
char str3[20];                // Declaration without initialization
~~~~

## String Input and Output
* You can use the printf function to print strings and the scanf function to read strings from the user.

* Example:
~~~~
char name[20];

printf("Enter your name: ");
scanf("%s", name);   // Reads a string from the user

printf("Hello, %s!\n", name);  // Prints the string
~~~~

* The following declaration and initialization create a string consisting of the word "Hello". To hold the null character at the end of the array, the size of the character array containing the string is one more than the number of characters in the word "Hello."
~~~~
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
~~~~

* If you follow the rule of array initialization then you can write the above statement as follows:
~~~~
char greeting[] = "Hello";
~~~~

* Actually, you do not place the null character at the end of a string constant. The C compiler automatically places the '\0' at the end of the string when it initializes the array. Let us try to print the above mentioned string: 
~~~~
#include <stdio.h>

int main ()
{
	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	printf("Greeting message: %s\n", greeting );
	return 0;
}
~~~~

## String Functions

* C supports a wide range of functions that manipulate null-terminated strings:
	* strcpy(s1, s2); - Copies string s2 into string s1.
	* strcat(s1, s2); - Concatenates string s2 onto the end of string s1.
	* strlen(s1); - Returns the length of string s1.
	* strcmp(s1, s2); - Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
	* strchr(s1, ch); - Returns a pointer to the first occurrence of character ch in string s1.
	* strstr(s1, s2); - Returns a pointer to the first occurrence of string s2 in string s1.

* The following example uses some of the above-mentioned functions:
~~~~
#include <stdio.h>
#include <string.h>

int main() 
{
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int len;

/* copy str1 into str3 */
	strcpy(str3, str1);
	printf("strcpy(str3, str1): %s\n", str3);
	
/* concatenates str1 and str2 */
	strcat(str1, str2);
	printf("strcat(str1, str2): %s\n", str1);

/* total length of str1 after concatenation */
	len = strlen(str1);
	printf("strlen(str1): %d\n", len);

	return 0;
}
~~~~

* When the above code is compiled and executed, it produces the following result:
~~~~
strcpy(str3, str1): Hello
strcat(str1, str2): HelloWorld
strlen(str1): 10
~~~~

* Another example:
~~~~
#include <string.h>
#include <stdio.h>

int main() {
    char str1[20] = "Hello";
    char str2[10] = "World";
    char result[30];

    printf("Length of str1: %d\n", strlen(str1));

    strcpy(result, str1);
    printf("Result after strcpy: %s\n", result);

    strcat(result, str2);
    printf("Result after strcat: %s\n", result);

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}
~~~~

## Character Input and Output
* Individual characters of a string can be accessed and manipulated using array indexing.

* Example: 
~~~~
char str[] = "Hello";

printf("First character: %c\n", str[0]);

str[0] = 'J';
printf("Modified string: %s\n", str);
~~~~

## String Formatting
* C provides formatting options to control how strings are printed using the printf function. The %s format specifier is used to print strings.

* Example:
~~~~
char name[] = "John";
int age = 25;

printf("Name: %s, Age: %d\n", name, age);
~~~~

#### Working with strings in C requires careful handling to ensure that the null character is correctly placed and that sufficient memory is allocated to store the string. Additionally, functions like scanf should be used with caution to avoid buffer overflow issues.
