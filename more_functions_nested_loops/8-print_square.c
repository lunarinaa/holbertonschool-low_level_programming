#include "main.h"

/**
 * print_square - Print square  #.
 * @size:  size of the square
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');

			if (b == size - 1)
				continue;
		}
	}

	_putchar('\n');
}
