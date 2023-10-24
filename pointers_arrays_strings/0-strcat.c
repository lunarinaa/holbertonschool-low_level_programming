#include "main.h"
/**
 * _strcat - a function to concatenate two strings
 * @dest: destination
 * @src: source
 *  Return: dest.
 */
char *_strcat(char *dest, char *src)
{
int i, len;
/* find the length if the dest */
len = 0;
while (dest[len] != '\0')
len++;
/*use len as starting index for scr */
for (i = 0; src[i] != '\0'; i++)
	{
	dest[len + i] = src[i];
	}
/* adding null terminator at the end */
dest[len + i] = '\0';
return (dest);
}
