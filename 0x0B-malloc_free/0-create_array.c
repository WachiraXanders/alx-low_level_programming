#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
	*create_array - will create an array.
	*@size: will determine the size of the memory access.
	*@c: The character or string array to be pritned.
	*
	*Return: The value of the array.
	*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
