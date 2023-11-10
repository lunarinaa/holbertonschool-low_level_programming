#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of elements from s2
 * Return: pointer to concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len1, len2;
char *cat;
len1 = 0;
len2 = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[len1] != '\0')
	len1++;
while (s2[len2] != '\0')
	len2++;
if (n >= len2)
	n = len2;
cat = malloc(sizeof(char) * (len1 + n + 1));
if (cat == NULL)
	return (NULL);
for (i = 0; i < len1; i++)
	cat[i] = s1[i];
for (i = 0; i < n; i++)
	cat[len1 + i] = s2[i];
cat[len1 + i] = '\0';
return (cat);
}

