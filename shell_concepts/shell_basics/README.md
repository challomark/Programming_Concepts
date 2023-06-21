# Shell Basics

* In software engineering, a shell refers to a user interface that allows users to interact with an operating system or execute commands. It acts as a mediator between the user and the operating system, providing a way to access various system functions and execute programs or scripts.

* Shells provide a command-line interface (CLI) or a graphical user interface (GUI) through which users can interact with the underlying operating system. The command-line shell accepts text-based commands that are interpreted and executed by the operating system. The graphical shell, on the other hand, presents a visual interface with menus, windows, and icons, allowing users to interact with the system using mouse clicks and keyboard input.

* The shell provides a set of commands and utilities that can be used to perform tasks such as file manipulation, process management, system configuration, and more. It also supports scripting, allowing users to automate repetitive tasks by writing scripts that can be executed by the shell.

* Overall, shells play a crucial role in software engineering as they provide a means for users and developers to interact with the operating system and perform various tasks efficiently.

## Shell navigation

* Shell navigation refers to the process of moving between directories (folders) and manipulating files and directories using commands within a shell environment. 

* Here are some common commands used for shell navigation:

### pwd (Print Working Directory)
* Displays the current directory you are in.
### ls (List)
* Lists the files and directories in the current directory.
	* ls -l: Lists files and directories in long format, providing detailed information.
	* ls -a: Lists all files and directories, including hidden ones.
	* ls -h: Lists file sizes in human-readable format.
### cd (Change Directory)
* Changes the current directory.
	* cd directory_name: Moves into the specified directory.
	* cd ..: Moves up one level to the parent directory.
	* cd ~ or cd: Moves to the home directory.
### mkdir (Make Directory)
* Creates a new directory.
	* mkdir directory_name: Creates a directory with the given name.
### rmdir (Remove Directory)
* Deletes an empty directory.
	* rmdir directory_name: Deletes the specified directory.
### rm (Remove)
* Deletes files or directories.
	* rm file_name: Deletes the specified file.
	* rm -r directory_name: Deletes a directory and its contents recursively.
### mv (Move)
* Moves or renames files and directories.
	* mv source destination: Moves a file or directory to a new location or renames it.
### cp (Copy)
* Copies files and directories.
	* cp source destination: Copies a file or directory to a new location.
### touch (Create Empty File)
* Creates a new empty file.
	* touch file_name: Creates a file with the given name.

#### These are just a few examples of commands for shell navigation. Shell environments may have additional commands and options depending on the operating system and shell you are using. You can explore the documentation or online resources specific to your shell for more information on navigation commands and their usage.
