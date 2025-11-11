#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int ii;
	int i = 0;
	char *copie;
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ii = i;
	copie = malloc((i + 1) * sizeof(char));
	if (copie == NULL)
	{
		return (NULL);
	}
	for( i = 0; i < ii; i++)
	{
		copie[i] = str[i];
	}
return (copie);
}
