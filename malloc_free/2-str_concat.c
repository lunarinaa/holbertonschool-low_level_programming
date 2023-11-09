#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len, len1 = 0, len2 = 0;
	char *pt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;

	for (j = 0; s2[j]; j++)
		len2++;

	len = len1 + len2 + 1;
	pt = malloc(sizeof(char) * len);

	if (pt == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		pt[i] = s1[i];

	for (j = 0; s2[j]; j++)
		pt[i + j] = s2[j];

	pt[i + j] = '\0';

	return (pt);
}
