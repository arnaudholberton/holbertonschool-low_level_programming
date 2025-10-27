#include "main.h"
/**
*_isdigit - compare chiffre
*@c : a comparer
*Return: ci chiffre 0
*/
int _isdigit(int c)
{
	if (c >= '0' || c <= '9')
	return (1);
	else
	return (0);
}
