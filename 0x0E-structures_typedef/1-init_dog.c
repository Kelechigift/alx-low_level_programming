#include "myheader.h"
#include <stdio.h>
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
	strcpy(d->n`ame = name);
	d->age = age;
	strcpy(d->owner = owner);
}
