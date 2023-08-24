#include "main.h"
/**
 *_strncpy - will copy a string.
 *@dest: The destination
 *@src: source.
 *@n: the number of bytes.
 *
 *Return: Return the pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src [i];
	}
	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}
