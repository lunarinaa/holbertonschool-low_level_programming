#include "main.h"
/**
 * _pow_recursion - function to raise number to the power of another number
 * @x: value to raise
 * @y: power of
 * Return: result
 */
int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
result *= _pow_recursion(x, y - 1);
return (result);
}
