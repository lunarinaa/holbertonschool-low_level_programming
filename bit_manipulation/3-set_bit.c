#include "main.h"
/**
 * set_bit - sets given bit to 1
 * @n: pointer to the bit.
 * @index: index
 * Return: 1 success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
