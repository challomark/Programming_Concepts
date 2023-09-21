# Static Libraries

* A static library, also known as a "static link library" or simply a "static lib," is a collection of object code that is linked with a program at compile time. It contains pre-compiled functions, classes, or routines that can be used by multiple programs or modules.

* Static libraries are a way to share code between different programs, and they are particularly common in C programming.

* Here's how a static library works and how to create and use one:

## How a Static Library Works:
### Creation
* First, you compile a set of source code files (.c or .cpp) into object files (.o) using a compiler like gcc. Each object file contains compiled code for a specific function, class, or module.

### Library Creation
* Next, you create a static library by archiving these object files into a single file with a .a (on Unix-like systems) or .lib (on Windows) extension. You can use tools like ar (Unix-like) or lib (Windows) to create this archive. The resulting file contains the compiled code for all the functions or modules you want to include in the library.

### Linking
* When you compile a program that needs to use functions or modules from the static library, you specify the library in the linker stage of compilation. The linker then extracts the necessary object files from the library and combines them with your program's object files to create a single executable file.

## Creating a Static Library:
* Here's a simplified step-by-step guide to create a static library using GCC on a Unix-like system:

* Compile your source code files into object files:
~~~~
gcc -c file1.c file2.c
~~~~

* Create a static library archive using ar:
~~~~
ar rcs libmylibrary.a file1.o file2.o
~~~~
* This command creates a static library named libmylibrary.a and adds file1.o and file2.o to it.

## Using a Static Library:
* To use a static library in your program, you need to:

* Include the library's header files in your source code. This provides function prototypes and other declarations needed for your code to use the library's functions.
* Compile your program while specifying the library to link with using the -l flag:
~~~~
gcc -o myprogram myprogram.c -L/path/to/library -lmylibrary
~~~~
* Here, -lmylibrary tells the linker to link with libmylibrary.a.

* Run your program:
~~~~
./myprogram
~~~~

* Your program will now be able to use the functions or modules from the static library.

* Keep in mind that static libraries have some drawbacks, such as increasing the size of your executable and not allowing for easy updates of library code without recompiling all dependent programs. In some cases, dynamic libraries (shared libraries) may be more suitable.

## Basic usage of ar, ranlib, nm
* ar, ranlib, and nm are command-line utilities often used in Unix-like systems, including Linux, to manipulate and inspect static libraries (*.a files). Here's a brief overview of their basic usage:

### ar - Archive Utility:
* The ar command is used for creating and manipulating static library archives. Here are some common ar commands:

* Creating a Static Library Archive:
~~~~
ar rcs libmylibrary.a file1.o file2.o
~~~~
* This command creates a static library named libmylibrary.a and adds file1.o and file2.o to it.

* Adding Files to an Existing Archive:
~~~~
ar r libmylibrary.a newfile.o
~~~~
* Use the r option to add newfile.o to the existing library.

* Listing Contents of an Archive:
~~~~
ar t libmylibrary.a
~~~~
* The t option lists the files contained in the archive.

* Extracting Files from an Archive:
~~~~
ar x libmylibrary.a file1.o
~~~~
* Use the x option to extract file1.o from the library.

### ranlib - Archive Indexer:
* The ranlib command is used to generate an index for a static library. This index improves the efficiency of accessing files within a large library. To create or update an index for a library, simply run:
~~~~
ranlib libmylibrary.a
~~~~
* Note that some modern systems automatically generate the index when the library is created, so you may not need to run ranlib explicitly.

### nm - Symbol Table Listing:
* The nm command is used to display the symbol table of an object file or a static library. It shows the names and attributes of functions and variables defined in the file. Basic usage:

* List Symbols in an Object File:
~~~~
nm objectfile.o
~~~~

* List Symbols in a Static Library:
~~~~
nm libmylibrary.a
~~~~
* nm will display a list of symbols along with their addresses and types (e.g., function, data, etc.). You can use this information to check which symbols are defined in your library or object files.

#### Remember that these commands are primarily used for working with static libraries and object files. For dynamic/shared libraries (.so files), you would typically use different tools and techniques, such as ldd to list library dependencies or objdump for disassembling shared objects.
