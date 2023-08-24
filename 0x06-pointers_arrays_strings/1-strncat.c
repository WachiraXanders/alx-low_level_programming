#include "main.h"

/**
 *_strncat - Combine the strings.
 *@dest: Destination.
 *@src:Source.
 *@n: Number of bytes that can used.
 *
 *Return: pointer to the string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr)
	{
		dest_ptr++;
	}

	while (*src && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	*dest_ptr = '\0';
	return (dest);
}
