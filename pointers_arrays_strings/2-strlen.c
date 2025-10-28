int _strlen(char *s)
{
	int b = 0;

	while (*s++)
	{
		b++;
	}
	return (b);
}