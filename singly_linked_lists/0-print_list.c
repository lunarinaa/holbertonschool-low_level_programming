#include "lists.h"

/**
 * print_list - function that prints elements of linked list
 * @h: the list_t list
 *
 * Return: number of printed elements
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
	printf("[0] (nil)\n");
	while (h != 0)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}

