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
	int name_length, owner_length, i = 0, x = 0;

	dog_t *dog;
	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	
	while (name[i++])
		name_length++;
	while (owner[x++])
		owner_length++;

	name_length += 1;
	owner_length += 1;
	dog->name = malloc(name_length * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= name_length; i++)
		dog->name[i] = name[i];

	dog->age = age;
	dog->owner = malloc(owner_length * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (x = 0; x <= owner_length; x++)
		dog->owner[x] = owner[x];

	return (dog);
}
