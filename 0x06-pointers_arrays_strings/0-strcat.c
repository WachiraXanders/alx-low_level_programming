#include "main.h"

/**
 *_strcat - check the code and combine.
 *@dest: destination.
 *@src: source.
 *
 *Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
