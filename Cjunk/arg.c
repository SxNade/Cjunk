#include <stdio.h>

int main(int argc, char *argv[])	//char argv[] stores the arguments in an array which can then be accessed using their index number
{
	int numberofArguments = argc;
	char *argument1 = argv[0];
	char *argument2 = argv[1];

	printf("\nNumber of Arguments: %d\n", numberofArguments);
	printf("\nArgument 1 is the program name: %s\n", argument1);	//The output program name that we run
	printf("\nArgument 2 is the command-line argument: %s\n", argument2);	//Argument 2 is the cmd-line arg.!
}

