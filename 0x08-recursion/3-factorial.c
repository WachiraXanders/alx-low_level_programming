#include <stdio.h>
#include "main.h"

/**
	*factorial - Will print the factorial values of the given character n.
	*@n: Character being defined with the c recursion.
	*
	*Return: The value of the string.
	*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
