#include "main.h"
/**
 * print_triangle - print triangle using #
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int tag, i;

	if (size > 0)
	{
		for (tag = 1; tag <= size; tag++)
		{
			for (i = size - tag; i > 0; i--)
				_putchar(' ');

			for (i = 0; i < tag; i++)
				_putchar('#');

			if (tag == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
