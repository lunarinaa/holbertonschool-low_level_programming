#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point
 * Pogramm to assign random number to the n
 * Return: 0 (succsess)
*/
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, n % 10);
digit = n % 10;
if (digit > 5)
{
printf(" and is greater than 5\n");
}
else if
(digit != 0 && digit < 6)
{
printf(" and is less than 6 and not 0\n");
}
else
{
printf(" and is 0\n");
}
return (0);
}
