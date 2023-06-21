# Shell Redirections

* In shell scripting, redirections allow you to control the input and output streams of commands, files, and processes. They enable you to redirect standard input (stdin), standard output (stdout), and standard error (stderr) to different sources or destinations.

* Here are some common redirection operators:

## Standard Output (stdout)
* '>': Redirects stdout to a file, overwriting its contents if the file already exists. If the file doesn't exist, it will be created. Example: 
~~~~
echo "Hello, world!" > output.txt
~~~~

* '>>': Redirects stdout to a file, appending the output to the end of the file. Example:
~~~~
echo "Additional text" >> output.txt
~~~~

## Standard Error (stderr)
* '2>': Redirects stderr to a file, overwriting its contents if the file already exists. If the file doesn't exist, it will be created. Example:
~~~~
command_that_generates_error 2> error.txt
~~~~

* '2>>': Redirects stderr to a file, appending the error output to the end of the file. Example:
~~~~
command_that_generates_error 2>> error.txt
~~~~

## Standard Input (stdin)
* '<': Redirects stdin from a file, using the contents of the file as input for the command. Example:
~~~~
sort < input.txt
~~~~

* '<<': Allows for "here documents" where multiple lines of input can be provided directly within the script.
~~~~
cat << EndOfText
This is line 1.
This is line 2.
EndOfText
~~~~

## Pipes (|)
* Connects the stdout of one command to the stdin of another, enabling command chaining and data flow between commands. Example:
~~~~
command1 | command2
~~~~

* Here, the output of command1 becomes the input for command2.


* These are some of the basic redirection operators used in shell scripting. They allow you to control the flow of data and manage input/output streams, providing flexibility in processing and manipulating data within the shell environment.
