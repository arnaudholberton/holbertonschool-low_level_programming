#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
  unsigned int n = 0;
  char *a;
  while (*s)
  	{
      a = accept;
      while (*a != s)
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