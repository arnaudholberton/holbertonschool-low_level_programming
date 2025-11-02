char *leet(char *a)
{
	while (*a != '\0')
	{
		if (*a == 'a' || *a == 'A')
		{
			*a = '4';
		}
		else if (*a == 'e')
		{
			*a = '3';
		}
	}
	return (a);
}
