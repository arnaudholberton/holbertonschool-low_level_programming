#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
my_dog = malloc(sizeof(dog_t));
	if (!my_dog)
	return (NULL);
	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;
	if (!my_dog->name || !my_dog->owner)
	{
		return (NULL);
	}
	return (my_dog);
}
