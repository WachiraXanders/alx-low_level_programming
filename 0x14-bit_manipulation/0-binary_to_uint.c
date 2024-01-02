#include <stdio.h>
#include <stddef.h>
/**
	*binary_to_uint - will convert the given input which will be in binary and
	*will convert the digits into unsigned integers.
	*@b: Represents  a string which has the integer 1 or 0.
	*that is being converted into binary.
	*Return: The converted number or the number 0.
	*return 0 when the value of the pointer is NULL or when the string
	*has a char character in it.
	*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '1' && *b != '0')
		return (0);

		result = (result << 1);

		if (*b == '1')
		result |= 1;
	}

	return (result);
}
