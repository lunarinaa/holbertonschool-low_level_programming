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
char abc = 'z';
while (abc <= 'z')
{
putchar(abc);
abc--;
}
putchar('\n');
return (0);
}
