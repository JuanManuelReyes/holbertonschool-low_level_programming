#include "dog.h"
#include <stdio.h>

/**
 * init_dog - asd
 * @d: asd
 * @name: asd
 * @age: asd
 * @owner: asd
 * Return: asd
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
