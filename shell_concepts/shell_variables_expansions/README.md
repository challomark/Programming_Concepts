# Shell Init Files, Variables & Expansions

* In shell scripting, initialization files, variables, and expansions play important roles in customizing the shell environment and manipulating data. Let's explore each of these concepts:

## Initialization Files
* Initialization files are scripts that are executed when a shell starts up. They allow you to set up environment variables, aliases, functions, and other shell configurations. The specific initialization file used depends on the shell being used and the user's configuration.
	* Bash: The initialization file for interactive Bash shells is usually ~/.bashrc. Additionally, ~/.bash_profile or ~/.bash_login is sourced for login shells.
	* Zsh: The initialization file for Zsh is usually ~/.zshrc. ~/.zshenv is sourced for all Zsh invocations, and ~/.zprofile is sourced for login shells.
	* Other shells may have different initialization files and conventions.

* You can edit these files to customize your shell environment, define aliases, set environment variables, and configure other options.

## Variables
* Variables are used to store and manipulate data in shell scripts. They can be assigned values and referenced within the script.
	* Variable assignment: Variables are assigned using the syntax variable_name=value. No spaces are allowed around the = sign. Example:
~~~~
name="John"
age=25
~~~~

	* Variable expansion: To reference the value of a variable, you prefix its name with a $ sign. Example:
~~~~
echo "My name is $name and I'm $age years old."
~~~~

	* Environment variables: Environment variables are global variables that are inherited by child processes. They are often used to configure the system and provide information to programs. Example:
~~~~
echo "The value of the HOME variable is $HOME."
~~~~

## Expansions
* Expansions are special constructs used to manipulate variables or command output within shell scripts.
	* Command substitution: $(command) or `command` allows you to capture the output of a command and use it as a value. Example:
~~~~
files=$(ls)
~~~~

	* Arithmetic expansion: $((expression)) allows you to perform arithmetic operations within a script. Example:~~~~
result=$((5 + 3))
~~~~

	* Brace expansion: {pattern} expands into multiple comma-separated values based on a pattern. Example:
~~~~
echo {a,b,c}
~~~~

	* Pathname expansion (globbing): Wildcards such as * and ? can be used to match filenames or paths. Example:
~~~~
ls *.txt
~~~~

	* Variable expansion modifiers: Additional modifiers can be applied to variable expansions, such as substring extraction, length calculation, and more. Example:
~~~~
echo ${variable:2:5}  # Extracts a substring of variable starting from index 2 with length 5
echo ${#variable}     # Returns the length of variable
~~~~


#### Initialization files, variables, and expansions allow you to customize the shell environment, store and manipulate data, and perform complex operations within shell scripting. Understanding and utilizing these concepts can enhance your productivity and flexibility when working with shell scripts.

## Things To Remember

* Your variable should be in capital letters. eg: NAME="Mark", then echo $NAME will result to Mark.
* SPORT="Foot", then echo "I love ${SPORT}ball will result to I love Football.
* Use printenv to display the values of environment/global variables.
* Use set to display the values of local/user created variables.
* Alias is used to define or display aliass. eg: alias home="cd ~"
* To remove an alias: unalias <alias_name> 
* Command expansions - eg: echo *.txt to find a file with the extension .txt, echo t* to find a file starting with letter t, echo [[:upper:]]* to find a file starting with a capital letter, echo [[:lower:]]* to find a file starting with small letters.
* Arithmetic expansions for + - * ** / % eg: echo $((2 + 2)) You can also asign variables and use the same format eg: echo $((NUM1 * NUM2)) 
* Brace expansions - eg: echo {1..10} result is numbers 1 to 10, echo {a..z} result is letters a to , echo st{oo,il,ai}l result is stool still stail

