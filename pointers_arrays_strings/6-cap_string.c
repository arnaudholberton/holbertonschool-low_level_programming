
char *cap_string(char *a)
{

while (*a != '\0')
{
if (*a >= 'a' && *a <= 'z')
{
	if (*(a - 1) == ' ' || *(a - 1) == '\t') 
	{
		*a = *a - 32;
	}
		
}
a++;
}
return (a);
}
