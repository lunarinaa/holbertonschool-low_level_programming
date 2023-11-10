#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory
 * @b: parameter
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
void *pt = malloc(b);
if (pt == NULL)
	exit(98);
return (pt);
}

