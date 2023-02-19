Your variable should be in capital letters. eg: NAME="Mark", then echo $NAME will result to Mark.
SPORT="Foot", then echo "I love ${SPORT}ball will result to I love Football.
Use printenv to display the values of environment/global variables.
Use set to display the values of local/user created variables.
Alias is used to define or display aliass. eg: alias home="cd ~"
To remove an alias: unalias <alias_name> 
Command expansions - eg: echo *.txt to find a file with the extension .txt, echo t* to find a file starting with letter t, echo [[:upper:]]* to find a file starting with a capital letter, echo [[:lower:]]* to find a file starting with small letters.
Arithmetic expansions for + - * ** / % eg: echo $((2 + 2)) You can also asign variables and use the same format eg: echo $((NUM1 * NUM2)) 
Brace expansions - eg: echo {1..10} result is numbers 1 to 10, echo {a..z} result is letters a to , echo st{oo,il,ai}l result is stool still stail

