#include <stdio.h>
#include "main.h"
/**
	*_puts_recursion - Prints the string characters.
	*@s: The charater being printed.
	*
	*Return: Always 0.
	*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
