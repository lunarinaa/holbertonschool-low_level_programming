#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 * Description: Alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
char hex[] = "0123456789abcdef";
for (x = 0; x <= 16; x++)
{
putchar(hex[x]);
}
putchar('\n');
return (0);
}
