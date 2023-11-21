#include <stdlib.h>
/**
	*_strdup - Duplicate a string using malloc.
	*@str: The input string to duplicate.
	*
	*Return: A pointer to the duplicated string.
	*	 NULL if str is NULL or if memory allocation fails.
	*/
char *_strdup(char *str)
{
	char *duplicate;

	unsigned int length = 0, i;

	i = 0;

	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
	length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	return (NULL);

	while (i <= length)
	{
		duplicate[i] = str[i];
		i++;
	}

	return (duplicate);
}
