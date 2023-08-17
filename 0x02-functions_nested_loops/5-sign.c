#include "main.h"
/**
	*print_sign - Will print either positive or negative or 0
	*@n: Is the character that will be checked.
	*
	*Return: Will be (0=zero,+=one,-=-one)
	*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
