#include <stdio.h>
#include "main.h"
#include <string.h>
/**
	*_reverse_string_recursion - Recursive helper function to reverse a string.
	*@s: The string to be reversed.
	*@start: The starting index.
	*@end: The ending index.
	*/
void _reverse_string_recursion(char *s, int start, int end)
{
	if (start < end)

	{

		char temp = s[start];

		s[start] = s[end];

		s[end] = temp;

		_reverse_string_recursion(s, start + 1, end - 1);
	}
}
/**
	*_print_rev_recursion - will print a string in reverse.
	*@s: This is the string being reversed.
	*
	*Return: Always 0.
	*/
void _print_rev_recursion(char *s)
{
	int length = strlen(s);

	if (length > 0)

	{
		_reverse_string_recursion(s, 0, length - 1);
		_putchar(*s);
		_print_rev_recursion(s + 1);

	}
}
