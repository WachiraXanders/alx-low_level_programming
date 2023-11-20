#include <stdio.h>
#include "main.h"
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
	int i = 0;

	(void)argc;
	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
