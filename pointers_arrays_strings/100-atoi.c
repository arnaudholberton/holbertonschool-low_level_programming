#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 * Return: the converted integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
	       s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
