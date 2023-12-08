#include "main.h"

/**
 * flip_bits - function to return number of bits needed to be flipped
 * @n: The number.
 * @m: The number to flip n to.
  * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor > 0)
	{
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}
