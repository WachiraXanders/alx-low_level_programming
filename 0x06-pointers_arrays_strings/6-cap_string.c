#include <stdbool.h>
#include "main.h"
/**
 *is_seperator - Checks if a character is a word.
 *@c: The character.
 *
 *Return: Pointer to the modified string.
 */
bool is_seperator(char c)
{
	int i;
	char seperator[] = "\t\n,;.!?\"(){}:";

	for (i =  0; seperator[i] != '\0'; i++)
	{
		if (c == seperator[i])
		{
			return (true);
		}
	}
	return (false);
}
/**
 *cap_string - Capitalizes all words of a string.
 *@str: The string
 *
 *Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}
	i++;

	while (str[i] != '\0')
	{
		if (is_seperator(str[i]))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		else
		{
			i++;
		}
	}
	return (str);
}

