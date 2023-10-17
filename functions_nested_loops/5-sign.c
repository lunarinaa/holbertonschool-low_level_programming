#include "main.h"
/**
 *print_sign - Entry point
 *@n: character to check
 *Programm that prints sign
 *Return: 1 if lowercase else 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
_putchar ('-');
return (-1);
}
