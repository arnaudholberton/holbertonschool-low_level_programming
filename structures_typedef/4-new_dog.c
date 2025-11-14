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
	dog_t *chien;
	int i, mi;
chien = malloc(sizeof(dog_t));
	if (chien == NULL)
	return (NULL);
	for (mi = 0; name[mi]; mi++)
	{
	}
	chien->name = malloc(sizeof(char) * mi + 1);
	if (!chien->name)
{
		free(chien->name);
	return (NULL);
}	for (mi = 0; owner[mi]; mi++)
	{}
	chien->owner = malloc(sizeof(char) * mi + 1);
		if (!chien->owner)
{	
	free(chien->owner);
	return (NULL);
}	for (i = 0; name[i] != '\0'; i++)
	{
		chien->name[i] = name[i];
	}
		for (i = 0; owner[i] != '\0'; i++)
	{
		chien->owner[i] = owner[i];
	}
	chien->age = age;
	if (!chien->name || !chien->owner)
	{
		free(chien);
		return (NULL);
	}
		return (chien);
}
