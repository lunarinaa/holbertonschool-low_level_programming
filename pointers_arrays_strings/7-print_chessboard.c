#include "main.h"
/**
 * print_chessboard - function to print a chessboard
 *@a: array
 *
 */
void print_chessboard(char (*a)[8])
{
int r, c;
for (c = 0; a[c][7]; c++)
{
for (r = 0; r < 8; r++)
_putchar (a[c][r]);
_putchar ('\n');
}
}
