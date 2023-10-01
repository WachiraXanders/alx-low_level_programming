#include <stdio.h>
#include <string.h>
#include "main.h"

/**
	*_strlen_recursion - will count the length of the string.
	*@s: This is the character to be printed.
	*
	*Return: The length of the string.
	*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	return (1 + _strlen_recursion(s + 1));

}
