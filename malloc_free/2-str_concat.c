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
int i, s1i, s2i, ii;
for (i = 0; s1[i] != '\0'; i++)
{}
s1i = i;
for (i = 0; s2[i] != '\0'; i++)
{}
s2i = i;
a = malloc((s1i + s2i + 2) * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < s1i; i++)
{
a[i] = s1[i];
}
for (ii = 0; ii <= s1i; i++)
{
a[i] = s2[ii];
ii++;
}

return (a);
}
