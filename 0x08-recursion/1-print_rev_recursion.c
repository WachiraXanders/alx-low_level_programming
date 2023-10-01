#include <stdio.h>
#include "main.h"
#include <string.h>

/**
	*_print_rev_recursion - will print a string in reverse.
	*@s: This is the string being reversed.
	*
	*Return: Always 0.
	*/
void _print_rev_recursion(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
