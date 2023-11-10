#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function to allocate memory
 * @nmemb: number of elements
 * @size: size;
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
	return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
	return (NULL);
}
return (ptr);
}
