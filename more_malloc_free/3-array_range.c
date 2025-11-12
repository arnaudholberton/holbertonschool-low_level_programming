#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *a;
int compteur = 0, i, c;
int b = min;
	if (min > max)
	{
		return (NULL);
	}
	while (b <= max)
	{
		compteur++;
		b++;
	}
	a = malloc(sizeof(int) * compteur);
	if (a == NULL)
	{
		return (NULL);
	}
	c = min;
	for (i = 0; i < compteur; i++)
	{
		a[i] = c++;
	}
	return (a);
}
