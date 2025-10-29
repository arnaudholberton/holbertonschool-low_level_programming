char *_strcat(char *dest, char *src)
{
	int i = 0;
	int ii = 0;
while (dest[i] != '\0')
{
	i++;
}
for ( ; src[ii] != '\0'; ii++)
{
dest[i] = src[ii];
i++;
}
	return (dest);
}