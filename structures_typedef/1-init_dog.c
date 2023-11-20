#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable
 * struct dog - information about dog
 * @d: pointer to a new dog
 * @name: name
 * @age: age
 * @owner: owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}

