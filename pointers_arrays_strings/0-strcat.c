#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int ii = 0;
while (dest[i] != '\0')
{
	i++;
}
for (ii = 0; src[ii] != '\0'; ii++)
{
dest[i] = src[ii];
i++;
}
	return (dest);
}
