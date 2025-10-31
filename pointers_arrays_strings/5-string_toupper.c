#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: pointer to the string to be modified
 * Return: pointer to the modified string
 */
char *string_toupper(char *b)
{
char *a = b;
while (*a != '\0')
{
if (*a >= 'a' && *a <= 'z')
{
*a = *a - 32;
}
a++;
}
return (b);
}
