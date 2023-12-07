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

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
	}
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);

	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
