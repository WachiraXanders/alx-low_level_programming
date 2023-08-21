#include "main.h"

/**
	*_strlen - Calculates the number of characters.
	*@s: Is the variable storage of the above.
	*
	*Return: Always 0.
	*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
