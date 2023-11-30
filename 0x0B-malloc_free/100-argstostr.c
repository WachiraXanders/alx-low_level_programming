#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 *         Each argument is followed by a '\n' in the new string.
 */
char *argstostr(int ac, char **av)
{
    char *result;
    int i, j, len, total_len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            total_len++;
        }
        total_len++; /* Account for '\n' after each argument */
    }

    /* Allocate memory for the concatenated string */
    result = malloc(sizeof(char) * (total_len + 1));

    if (result == NULL)
        return (NULL);

    /* Concatenate the arguments with '\n' */
    len = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            result[len++] = av[i][j];
        }
        result[len++] = '\n';
    }

    result[len] = '\0'; /* Null-terminate the string */

    return (result);
}
