#include "lists.h"
/**
 * get_dnodeint_at_index - function to return the nth node
 * @head: pointer to the 1st node
 * @index: the nth elements number
 * Return: nth element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	return (temp);
}

