#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int a = 0;
int b = 0;
int c = 0;
int t;
while (s[a] != '\0')
{
	a++;

}
c = a -1;
while (b < c)
{
t = s[b];
s[b] = s[c];
s[c] = t;
c--;
b++;
}
}
