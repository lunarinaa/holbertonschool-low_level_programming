#include "lists.h"

/**
 * list_len - function to determine the number of elements in a list
 * @h: sthe list_t list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}

