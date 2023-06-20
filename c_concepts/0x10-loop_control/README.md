# Loop Control Statements in C

* In C programming, loop control statements allow you to control the execution of loops based on certain conditions. They provide flexibility in managing loops and altering their flow. There are three primary loop control statements in C: break, continue, and goto.

## Break statement
* The break statement is used to exit or terminate the current loop. When encountered, the break statement immediately terminates the innermost loop (where it is placed) and the program execution continues after the loop. It is commonly used to exit loops prematurely based on a specific condition.

* Example: 
~~~~
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;  // Exit the loop when i becomes 5
    }
    printf("%d ", i);
}
// Output: 1 2 3 4
~~~~

## Continue statement
* The continue statement is used to skip the remaining code within the loop for the current iteration and move on to the next iteration. When encountered, the continue statement jumps to the loop's next iteration without executing the remaining code in the loop body. It is useful when you want to skip certain iterations based on a specific condition.

* Example:
~~~~
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;  // Skip the current iteration when i is 3
    }
    printf("%d ", i);
}
// Output: 1 2 4 5
~~~~

## GoTo statement
* The goto statement allows you to transfer control to a specific labeled statement within the program. It is considered a low-level control flow mechanism and is generally discouraged from regular use because it can make the code harder to understand and maintain. The labeled statement must be within the same function.

* Example:
~~~~
int i = 1;

start:  // Label
printf("%d ", i);
i++;

if (i <= 5) {
    goto start;  // Jump to the 'start' label
}
// Output: 1 2 3 4 5
~~~~

### These loop control statements offer flexibility in managing loops in C programming. The break statement terminates the loop, the continue statement skips the current iteration, and the goto statement transfers control to a specific labeled statement. However, it's important to use them judiciously and ensure the code remains clear and maintainable.

# Types of Loops in C

* In C programming, there are three types of loops available to control the flow of execution based on specific conditions: for, while, and do-while loops. Each loop type has its own syntax and usage.

## For loop
* The for loop is the most commonly used loop in C. It allows you to repeatedly execute a block of code for a specified number of times. The syntax of a for loop is as follows:
~~~~
for (initialization; condition; update) {
    // Code to be executed
}
~~~~
* The initialization is an expression that is executed only once before the loop starts. It is typically used to initialize loop control variables.
* The condition is a boolean expression that is evaluated before each iteration. If the condition is true, the loop continues; otherwise, it terminates.
* The update is an expression that is evaluated after each iteration. It typically increments or decrements the loop control variable.

* Example:
~~~~
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
// Output: 1 2 3 4 5
~~~~

## While loop
* The while loop repeatedly executes a block of code as long as a specified condition is true. The syntax of a while loop is as follows:
~~~~
while (condition) {
    // Code to be executed
}
~~~~
* The condition is a boolean expression that is evaluated before each iteration. If the condition is true, the loop continues; otherwise, it terminates.

* Example:
~~~~
int i = 1;

while (i <= 5) {
    printf("%d ", i);
    i++;
}
// Output: 1 2 3 4 5
~~~~

## Do-While loop
* The do-while loop is similar to the while loop, but the condition is evaluated after each iteration. This ensures that the loop body is executed at least once, even if the condition is initially false. The syntax of a do-while loop is as follows:
~~~~
do {
    // Code to be executed
} while (condition);
~~~~
* The condition is a boolean expression that is evaluated after each iteration. If the condition is true, the loop continues; otherwise, it terminates.

* Example:
~~~~
int i = 1;

do {
    printf("%d ", i);
    i++;
} while (i <= 5);
// Output: 1 2 3 4 5
~~~~

### Each loop type has its own strengths and use cases. The for loop is commonly used when the number of iterations is known in advance, the while loop is used when the number of iterations is not fixed, and the do-while loop is used when you want to ensure at least one execution of the loop body.
