#include "main.h"
/**
 * _strncat - function to concatenate two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes that dest contains
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;
while (dest[i++])
dest_len++;
for (i = 0; src[i] && i < n; i++)
	dest[dest_len++] = src[i];
return (dest);
}
