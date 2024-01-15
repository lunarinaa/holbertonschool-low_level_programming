#include "search_algos.h"

/**
 * binary_search  - function to search for an element in a sorted array
 * @array: first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: indext of the value if found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		mid = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");

		if (value == array[mid])
		{
			return (mid);
		}
		else
		if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
