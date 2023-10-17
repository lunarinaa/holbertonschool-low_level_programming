#include "main.h"
/**
 *_islower - Entry point
 *@c: character to check
 *Programm that checks for lowercase
 *Return: 1 if lowercase else 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
