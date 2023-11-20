#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - function to define string len
 * @str: string
 * Return: len
 */
int _strlen(char *str)
{
int len = 0;
while (*str++)
	len++;
return (len);
}
/**
 * _strcopy - function to copy string
 * @dest: copy
 * @src: sourse
 * Return: copy
 */
char *_strcopy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
	dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
 * new_dog  -  a function that creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
if (name == NULL || owner == NULL || age < 0)
	return (NULL);
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
	return (NULL);
newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
newDog->name = _strcopy(newDog->name, name);
newDog->age = age;
newDog->owner = _strcopy(newDog->owner, owner);

return (newDog);
}


