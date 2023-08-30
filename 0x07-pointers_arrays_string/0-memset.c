#include <stddef.h>

/**
 *_memset - Will give the value of the data in the pointer.
 *@s: The pointer to the memory area to be filled.
 *@b: The constant byte value to fill the memory with.
 *@n: The number of bytes to fill.
 *
 *Return: The value of the s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
