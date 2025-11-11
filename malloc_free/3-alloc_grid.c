#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2 dimensional array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **tableau;
	int *bloc;
	int i;
	if (width <= 0 || height <= 0)
		return (NULL);
	tableau = malloc(height * sizeof(int *));
	if (tableau == NULL)
		return (NULL);
	bloc = malloc(width * height * sizeof(int));
	if (bloc == NULL)
		{
			free(tableau);
			return (NULL);
		}
	for (i = 0; i < height; i++)
		tableau[i] = bloc + i * width;
	for (i = 0; i < width * height; i++)
		bloc[i] = 0;
	return (tableau);
}
