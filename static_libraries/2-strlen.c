#include "main.h"
/**
 * _strlen - function to return the length of a string.
 * @s: parameter.
 * Return: the length.
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
