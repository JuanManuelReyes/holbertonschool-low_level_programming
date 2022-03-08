#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - asd
 * @name: asd
 * @age: asd
 * @owner: asd
 * Return: asd
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length, owner_length, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		name_length++;
	name_length++;
	dog->name = malloc(name_length * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (i = 0; owner[i]; i++)
		owner_length++;
	owner_length++;
	dog->owner = malloc(owner_length * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner_length; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
