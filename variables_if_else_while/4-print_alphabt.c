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
char abc = 'a';
while (abc <= 'z')
{
if (abc != 'e' && abc != 'q')
{
putchar(abc);
}
abc++;
}
putchar('\n');
return (0);
}
