#include "main.h"
/**
 *_isalpha - Entry point
 *@c: character to check
 *Programm that checks for lowercase letter or uppercase
 *Return: 1 if lowercase else 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
