#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @a: pointer to the string to be modified
 * Return: pointer to the modified string
 */
char *cap_string(char *a)
{
int maj = 0;
while (*a != '\0')
{

	 if (a[0] >= 'a' && a[0] <= 'z' && maj == 0) 
	 {
			*a = *a - 32;
			maj = 1;
    }
else if (  *(a - 1 ) == ' ' || *(a - 1 ) == '\t' || *(a - 1 ) == '\n' )
{
			*a = *a - 32;
}
a++;
}
return (a);
}
