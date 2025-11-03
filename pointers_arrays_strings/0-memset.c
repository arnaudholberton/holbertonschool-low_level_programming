char *_memset(char *s, char b, unsigned int n)
{
char *a = s;
unsigned int i = 0;
	
	 while (i < n)
	{
		s[i] = b;
i++;
	}
	return (a);
}
