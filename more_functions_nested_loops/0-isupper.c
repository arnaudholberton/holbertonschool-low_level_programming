#include "main.h"
/**
*_isupper - function compare miniscule
*@c : lettre a comparer
*
*Return: sinon 0
*
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
