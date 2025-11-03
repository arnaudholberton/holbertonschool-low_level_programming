
#include "main.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int i;
int r1, r2;

		for (i = 0; i < size; i++)
		{
		r1 += *(a + i * size + i);
		r2 += *(a + i * size + (size - 1 - i));
		}
		printf("%d, %d\n", r1, r2);
}
