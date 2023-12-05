#include "lists.h"

/**
 * sum_dlistint - function to calculate sum of all the elements
 * @head: pointer to the 1st element
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

