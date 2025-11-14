#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints the details of a dog.
 * @d: A pointer to the dog structure.
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
