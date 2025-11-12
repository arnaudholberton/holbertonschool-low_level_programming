#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings up to n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
int i = 0, s1i;
unsigned int ii = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	s1i = i;
	a = malloc((sizeof(char) * i) + n + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < s1i; i++)
		a[i] = s1[i];
	for (ii = 0; ii < n; i++, ii++)
		a[i] = s2[ii];
	a[i] = '\0';
	return (a);
}
