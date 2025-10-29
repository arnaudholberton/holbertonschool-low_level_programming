char *_strcat(char *dest, char *src)
{
	int t;
t = *src;
*src = *dest;
*dest = t;
	return (dest);
}