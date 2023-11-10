#include "main.h"
#include <stdlib.h>
/**
 * array_range - function to create array of int
 * @min: minimum
 * @max: maximum
 * Return: pointer.
 */
int *array_range(int min, int max)
{
int i, size, *ptr;
if (min > max)
	return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
	return (NULL);
for (i = 0; i < size; i++)
	ptr[i] = min++;
return (ptr);
}

