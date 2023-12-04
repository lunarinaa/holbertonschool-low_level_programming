#include "lists.h"

/**
 * add_node_end - function to add node at the end of a list
 * @head: pointer to the head position
 * @str: string
 * Return: address of a new vallue
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

	temp->next = newnode;
	}
	return (newnode);
}

