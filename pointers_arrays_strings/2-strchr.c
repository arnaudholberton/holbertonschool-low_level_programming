#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
char *a;
while (*s)
{
if (*s == c)
{
a = s;
return (a);
}
s++;
}
if (*s == c)
return (s);
return (NULL);
}
