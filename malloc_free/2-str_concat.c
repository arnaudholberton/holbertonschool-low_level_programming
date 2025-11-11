#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j;
		int s1_len = 0, s2_len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	a = malloc(s1_len + s2_len + 1);
	if (a == NULL)
	return NULL;
	for (i = 0; i < s1_len; i++)
		a[i] = s1[i];
	for (j = 0; j < s2_len; j++)
		a[i + j] = s2[j];
	a[i + j] = '\0';
return (a);
}
