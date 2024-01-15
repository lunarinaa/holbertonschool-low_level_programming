#include "search_algos.h"

/**
 * linear_search - function to search for value in an array
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: index to the values location or -1;
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			break;
		}
	}
	if (i == size)
	{
		return (-1);
	}
	else
	return (i);
}

