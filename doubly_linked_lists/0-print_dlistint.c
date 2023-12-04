#include "lists.h"

/**
 * print_dlistint - function to print elements of linked list
 * @h: doubly list
 *
 * Return: number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

