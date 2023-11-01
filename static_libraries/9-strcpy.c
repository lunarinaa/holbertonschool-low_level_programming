#include "main.h"
/**
 * _strcpy - function to copy source code.
 * @dest: destination where to copy
 * @src: source from where to copy
 * Return: destination string
*/
char *_strcpy(char *dest, char *src)
{
int i, len;
len = 0;
while (src[len] != '\0')
len++;
for (i = 0; i < len; i++)
{
	dest[i] = src[i];
	}
dest[i] = '\0';
return (dest);
}
