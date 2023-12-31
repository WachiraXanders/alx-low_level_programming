#include <stdlib.h>

/**
 * alloc_grid - allocates a 2-dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated grid, NULL on failure or invalid input
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Check for invalid input */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the grid */
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    /* Initialize elements of the grid to 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            /* Free previously allocated memory on failure */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        /* Initialize elements to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
