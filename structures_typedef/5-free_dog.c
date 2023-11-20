#include <stdlib.h>
#include "dog.h"
/*
 * free_dog - function to free memory
 * @d: neewd to bee freed
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}

