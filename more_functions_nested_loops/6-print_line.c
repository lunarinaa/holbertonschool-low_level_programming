#include "main.h"
/**
 * print_line - make a  line using the character _.
 * @n: num of  _ characters
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
