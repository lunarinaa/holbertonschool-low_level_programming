#include "lists.h"

/**
 * free_list - function to free list
 * @head: pointer to the first element
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

