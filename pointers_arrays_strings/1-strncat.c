#include "main.h"
/**
 * _strncat - concatenate two strings, using at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to concatenate from src
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int ii = 0;
	int t = 0;

while (dest[i] != '\0')
{
	i++;
}
for (ii = 0; t < n && src[ii] != '\0'; ii++)
{
dest[i] = src[ii];
i++;
t++;
}
	return (dest);
}
