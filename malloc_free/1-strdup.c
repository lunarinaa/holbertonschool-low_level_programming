#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function returns a pointer to a new string
 * @str: string to copy
 * Return: a pointer to a newly allocated space in memory, or NULL
 */
char *_strdup(char *str)
{
int i, len = 0;
char *copy;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i]; i++)
{
len++;
}

copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
{
return (NULL);
}

for (i = 0; str[i]; i++)
{
copy[i] = str[i];
}
copy[len] = '\0';
return (copy);
}
