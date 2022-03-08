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
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));

	if (d1 == NULL)
		return (NULL);
	
	while (name[i++])
		name_length++;
	while (owner[x++])
		owner_length++;

	d1->name = malloc(name_length * sizeof(char));

	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}

	for (i = 0; i <= name_length; i++)
		d1->name[i] = name[i];

	d1->age = age;

	d1->owner = malloc(owner_length * sizeof(char));

	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}

	for (i = 0; i <= owner_length; i++)
		d1->owner[i] = owner[i];

	return (d1);
}
