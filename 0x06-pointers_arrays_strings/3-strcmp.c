#include "main.h"

/**
 *_strcmp - This compares two strings.
 *@s1: The first string.
 *@s2: The second string.
 *
 *Return: Return according to the result of the string.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1) - (int)(*s2));
}
