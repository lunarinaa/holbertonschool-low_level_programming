#include "lists.h"

/**
 * dlistint_len - function to return the number of nodes
 * @h: doubly list
 *
 * Return: number of nodes
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}

