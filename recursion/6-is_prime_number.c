#include "main.h"
int divisible(int num, int div);
int is_prime_number(int n);
/**
 * divisible - checks if number divisible by any other but 1 or itself
 * @num: number to check
 * @div: divisor
 * Return: 0
 */
int divisible(int num, int div)
{
if (num % div == 0)
{
return (0);
}
if (div == num / 2)
{
return (1);
}
return (divisible(num, div + 1));
}
/**
 * is_prime_number - checks if the number is prime
 * @n: number to check
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
int div = 2;
if (n <= 1)
{
return (0);
}
if (n >= 2 && n <= 3)
{
return (1);
}
return (divisible(n, div));
}
