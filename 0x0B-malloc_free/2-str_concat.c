#include <stdlib.h>

/**
	*str_concat - Concatenate two strings.
	*
	*@s1: The first string
	*@s2: The second string.
	*
	*Return: A pointer to the string or NULL on failure.
	*/
char *str_concat(char *s1, char *s2)
{
	char *result;

	unsigned int len_s1 = 0, len_s2 = 0, j = 0, i = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len_s1] != '\0')
	len_s1++;
	while (s2[len_s2] != '\0')
	len_s2++;

	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (result == NULL)
	return (NULL);

	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
