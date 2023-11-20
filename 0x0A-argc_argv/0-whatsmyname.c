#include <stdio.h>
/**
	*@ brief Entry point for the program.
	*
	*@ param argc will count the number of strings and display it on the screen.
	*@param argv will give the exact argument and print it on the screen.
	*
	*Return: will return 0 Always.
	*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
