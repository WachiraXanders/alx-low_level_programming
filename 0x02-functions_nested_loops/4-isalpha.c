#include "main.h"
/**
	*_isalpha - Checks for the letter c either lowercase or uppercase.
	*@c: The letter being checked.
	*
	*Return: Is 0 when the character is c . Else is 1.
	*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);

	else
	return (0);
}
