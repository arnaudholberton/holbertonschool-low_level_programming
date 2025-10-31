void reverse_array(int *a, int n)
{
int *debut = a;
int *fin = a + n -1;
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
