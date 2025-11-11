#include <stdlib.h>
#include <stdio.h>

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
	copie = malloc(i * sizeof(char));
	for( i = 0; i < ii; i++)
	{
		copie[i] = str[i];
	}
return (copie);
}