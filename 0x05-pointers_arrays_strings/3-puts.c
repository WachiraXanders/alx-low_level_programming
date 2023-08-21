#include "main.h"

/**
	*_puts - prints a string.
	*@str: The character checker.
	*
	*Return: The string value.
	*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
