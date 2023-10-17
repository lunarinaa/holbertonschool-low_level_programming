#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Programm that prints alphabet
 *Return: 0 (success)
 */
void print_alphabet_x10(void)
{
int times = 10;
int i, abc;
for (i = 0; i < times; i++)
{
char abc;  
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar (abc);
}
_putchar ('\n');
}
}
