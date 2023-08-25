#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	char leet_map[] = "AEOTLaeotl";
	char leet_replacements[] = "4307143071";

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; leet_map[j] != '\0'; j++)
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (str);
}
