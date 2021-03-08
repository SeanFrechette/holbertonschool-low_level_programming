#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen, i;
	dog_t *dog;
/* define dog */
	if (!name || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
/* store name */
	for (namelen = 0; namelen < name[namelen]; namelen++)
	{}
	namelen++;
	dog->name = malloc(namelen * sizeof(char));
	if (!(dog->name))
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		dog->name[i] = name[i];
/* store age */
	dog->age = age;
/* store owner */
	for (ownerlen = 0; i < owner[ownerlen]; ownerlen++)
	{}
	ownerlen++;
	dog->owner = malloc(ownerlen * sizeof(char));
	if (!(dog->owner))
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerlen; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
