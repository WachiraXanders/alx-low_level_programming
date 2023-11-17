#include <stdio.h>
#include "main.h"
#include <string.h>

/**
	* is_palindrome_recursive - This is the recursive function helper.
	* @s: The string to be checked.
	* @start: The string index.
	* @end: The ending index.
	*
	* Return: 1 if the string is palindrome and 0 if otherwise
	*/
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	return (1);

	if (s[start] != s[end])
	return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
	*is_palindrome - Check if a string is a palindrome.
	*@s: The string to be checked.
	*
	*Return: 1 if the string is a palindrome, 0 otherwise.
	*/
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
