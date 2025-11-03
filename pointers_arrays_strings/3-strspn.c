#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 * Return: number of bytes in the initial segment of s which consist only
 *         of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		char *a = accept;

		while (*a && *a != *s)
		{
			a++;
		}
		if (!*a)
		{
			break;
		}
		n++;
		s++;
	}
	return (n);
}
