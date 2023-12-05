#include "lists.h"
/**
 * delete_dnodeint_at_index - function do delete nth node
 * @head: pointer to 1st node;
 * @index: number of element that need to be deleted
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || index <= 0)
		return (-1);
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
