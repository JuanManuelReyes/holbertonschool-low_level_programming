#ifndef DOG_H
#define DOG_H

/**
 *struct dog - asd
 *@name: asd
 *@age: asd
 *@owner: asd
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - asd
 **/
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
