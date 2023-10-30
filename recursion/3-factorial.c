#include "main.h"
/**
 * factorial - return the factorial
 * @n: argument
 * Return: result of function
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
