# Storage Classes

* Storage classes determine the scope, lifetime, and visibility of variables and functions within a program. 
* C provides several storage classes that allow you to control these aspects of your program's data. Here are the main storage classes in C:

## Automatic (auto)
* This is the default storage class for local variables declared within a function. Variables declared as "auto" have a local scope and are automatically destroyed once the function exits. The "auto" keyword is rarely used explicitly since it's the default behavior.
~~~~
void exampleFunction() {
    auto int num = 10; // This is the same as: int num = 10;
    // ...
}
~~~~

## Register (register)
* This storage class suggests that the variable should be stored in a register of the CPU for faster access. However, due to compiler optimizations, this keyword is often ignored, and compilers can automatically decide whether to store a variable in a register or memory.
~~~~
register int counter;
~~~~

## Static (static)
* Variables declared as static have a lifetime that spans the entire program execution. They retain their values between function calls, and they have internal linkage (meaning they are only accessible within the file they are declared in).
~~~~
static int globalCounter = 0; // Retains value between function calls
~~~~

## External (extern)
* This storage class is used to declare a global variable or function that is defined in another source file. It indicates that the variable or function is defined elsewhere and should be linked during the compilation and linking process.
~~~~
extern int globalVar; // Declares a global variable defined in another file
~~~~

## Thread Local Storage (TLS) (thread_local)
* This storage class is used to declare variables that have thread-local storage. Each thread will have its own separate instance of the variable.
~~~~
thread_local int threadSpecificValue;
~~~~


#### Remember that these storage classes might have different behaviors and availability depending on the compiler and platform you are using. Additionally, some storage classes, like "register" and "thread_local", might have specific restrictions or behavior changes compared to the standard descriptions depending on the implementation.
