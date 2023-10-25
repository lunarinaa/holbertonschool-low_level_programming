#include "main.h"
/**
 * reverse_array - function to reverse the content of an array
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
int i, j;
int temp;
for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
