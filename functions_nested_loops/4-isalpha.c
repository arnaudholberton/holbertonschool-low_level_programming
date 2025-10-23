#include "main.h"
/**
*_isalpha - function compare miniscule
*@c : lettre a comparer
*
*Return: sinon 0
*
*/
int _isalpha(int c);
{
if (c >= 'a' && c <= 'Z')
return (1);
else
return (0);
}