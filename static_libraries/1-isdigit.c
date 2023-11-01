#include "main.h"
/**
 *_isdigit - checks if given is digit
 * @c: character to check
 * Return: 1 if is digit else 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
