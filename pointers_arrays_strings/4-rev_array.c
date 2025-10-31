#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
int *debut = a;
int *fin = a + n - 1;
int temp;
while (debut < fin)
{
	temp = *debut;
	*debut = *fin;
	*fin = temp;
debut++;
fin--;
}
}
