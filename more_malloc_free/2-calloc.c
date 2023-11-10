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
char *zero;
unsigned int i;
if (nmemb == 0 || size == 0)
	return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
	return (NULL);
}
zero = ptr;
for (i = 0; i < (size * nmemb); i++)
{
	zero[i] = 0;
}
return (ptr);
}
