#include "main.h"
/**
 * print_most_numbers - print numbers
 */
void print_most_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
{
if (num != 4 && num != 2)
_putchar ((num % 10) + '0');
}
_putchar ('\n');
}
