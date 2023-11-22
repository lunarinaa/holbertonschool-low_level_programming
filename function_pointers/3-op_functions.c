#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function to  sum up two numbers.
 * @a:  first number.
 * @b: second number.
 *
 * Return: The sum 
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to find  the difference
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to find  product of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - find the quotient of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder of the division.
 * @a: first number.
 * @b: second number.
 * Return:  remainder of the division 
 */
int op_mod(int a, int b)
{
	return (a % b);
}

