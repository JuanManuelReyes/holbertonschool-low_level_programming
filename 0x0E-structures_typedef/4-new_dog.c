#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - asd
 * @name: asd
 * @age: asd
 * @owner: asd
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, x; 
	unsigned int name_length, owner_length;

	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		name_length++;

	name_length += 1;

	dog->name = malloc(sizeof(char) * name_length);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
/*
	for (i = 0; i < name_length; i++)
		dog->name[i] = name[i];

	dog->age = age;

	for (x = 0; owner[x]; x++)
		owner_length++;

	owner_length += 1;

	dog->owner = malloc(sizeof(char) * owner_length);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < owner_length; i++)
		dog->owner[i] = owner[i];

	return (dog);
*/
}
