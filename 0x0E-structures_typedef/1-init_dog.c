#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize variable of dog
 * @name: name of dog
 * @owner: name of dog owner
 * @age: dog age
 * @d: pointer to structure
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
