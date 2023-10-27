#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: string to look inside
 * @needle: substring to look for
 * Return: begining of the substring or null
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;
while (*haystack != '\0')
{
	while (needle[j] != '\0' && haystack[i] == needle[j])
	j++;
	if (needle[j] == '\0')
{
	return (haystack - 4);
}
haystack++;
}
return ('\0');
}
