#include "lists.h"
/**
 * insert_dnodeint_at_index - function to insert node at specific position
 * @h: pointer to the 1st node
 * @idx: number of position
 * @n: value of node
 *
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}

