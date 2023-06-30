# File Handling

* File handling in C involves operations for reading and writing data to files. It allows you to store and retrieve information from external files on your computer. The standard library in C provides functions and structures specifically designed for file handling. 

* Here's an overview of how file handling works in C:

## Opening a File
* To open a file, you need to use the fopen() function, which takes two arguments: the file path and the mode. The mode specifies the purpose of file access, such as "r" for reading, "w" for writing, "a" for appending, etc.
~~~~
#include <stdio.h>

int main() {
    FILE *file_ptr;
    file_ptr = fopen("file.txt", "r"); // Opens file.txt for reading

    if (file_ptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Perform file operations here

    fclose(file_ptr); // Close the file
    return 0;
}
~~~~

## Reading from a File
* To read data from a file, you can use functions like fscanf() or fgets().

* Using fscanf():
~~~~
#include <stdio.h>

int main() {
    FILE *file_ptr;
    file_ptr = fopen("file.txt", "r");

    if (file_ptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    int num;
    fscanf(file_ptr, "%d", &num); // Reads an integer from the file

    printf("Read number: %d\n", num);

    fclose(file_ptr);
    return 0;
}
~~~~

## Writing to a File
* To write data to a file, you can use functions like fprintf() or fputs().

* Using fprintf():
~~~~
#include <stdio.h>

int main() {
    FILE *file_ptr;
    file_ptr = fopen("file.txt", "w");

    if (file_ptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fprintf(file_ptr, "Hello, File Handling in C!"); // Writes a string to the file

    fclose(file_ptr);
    return 0;
}
~~~~

## Closing a File
* After you finish working with a file, it's essential to close it using the fclose() function. This ensures that all data is written to the file and any resources associated with the file are released.
~~~~
#include <stdio.h>

int main() {
    FILE *file_ptr;
    file_ptr = fopen("file.txt", "r");

    // File operations...

    fclose(file_ptr); // Close the file after use
    return 0;
}
~~~~

* Remember that when working with files, always check if the file was opened successfully (by checking if the file pointer is not NULL) before performing any operations. Additionally, be cautious about file permissions and closing files when you are done with them to avoid resource leaks.
