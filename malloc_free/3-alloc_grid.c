#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int **tableau;
	if (width <= 0 || height <= 0)
		return (NULL);
	tableau = malloc((width * height) * sizeof(int));
	if (tableau == NULL)
		return (NULL);
	return (tableau);
}