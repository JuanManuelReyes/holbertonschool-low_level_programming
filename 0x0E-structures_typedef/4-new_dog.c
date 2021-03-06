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
	int name_length = 0, owner_length = 0, i = 0, x = 0;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	while (name[i++])
		name_length++;
	while (owner[x++])
		owner_length++;

	dog->name = malloc(name_length * sizeof(dog->name));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= name_length; i++)
		dog->name[i] = name[i];

	dog->age = age;

	dog->owner = malloc(owner_length * sizeof(dog->owner));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= owner_length; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
