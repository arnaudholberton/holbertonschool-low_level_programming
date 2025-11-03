	#include "main.h"
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
